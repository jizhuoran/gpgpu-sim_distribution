#include "../cuda-sim/ptx_ir.h"
#include "reg.hpp"


namespace dao_sim{


ptx_reg_t RegFile::get_reg(const ptx_thread_info* thread, const symbol* reg) {

    static bool unfound_register_warned = false;
    size_t index = thread->get_reg_index(reg->reg_num());
    std::cerr << "SJ: get " << reg->name() << ", id = " << reg->reg_num() << " at " << index << std::endl;

    if (_registers[index].status == REG_STATUS::IN_VALID) {
      assert( reg->type()->get_key().is_reg() );
      const std::string &name = reg->name();
      ptx_reg_t uninit_reg;
      uninit_reg.u32 = 0x0;
    //   write_reg(thread, reg, uninit_reg); // give it a value since we are going to warn the user anyway
      std::string file_loc = thread->get_location();
      if( !unfound_register_warned ) {
          printf("GPGPU-Sim PTX: WARNING (%s) ** reading undefined register \'%s\'. Setting to 0X00000000. This is okay if you are simulating the native ISA"
              "\n",
                 file_loc.c_str(), name.c_str());
          unfound_register_warned = true;
      }
    } else {
        return _registers[index].value;   
    }
}



void RegFile::set_reg(const ptx_thread_info* thread, const symbol* reg, ptx_reg_t value) {

    if( reg->name() == "_" ) {
      std::cerr << "SJ: the reg name is " << reg->name() << std::endl;
      return;
    } 

    size_t index = thread->get_reg_index(reg->reg_num());
    std::cerr << "SJ: get " << reg->name() << ", id = " << reg->reg_num() << " at " << index << std::endl;

    if (index < _registers.size()) {
        _registers[index].value = value;
        _registers[index].status = REG_STATUS::VALID;
    }
}




}
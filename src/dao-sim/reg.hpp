#ifndef DAO_REG
#define DAO_REG

#include <vector>

union ptx_reg_t {
   ptx_reg_t() {
      bits.ms = 0;
      bits.ls = 0;
      u128.low=0;
      u128.lowest=0;
      u128.highest=0;
      u128.high=0;
      s8=0;
      s16=0;
      s32=0;
      s64=0;
      u8=0;
      u16=0;
      u64=0;
      f16=0;
      f32=0;
      f64=0;
      pred=0;
   }
   ptx_reg_t(unsigned x) 
   {
      bits.ms = 0;
      bits.ls = 0;
      u128.low=0;
      u128.lowest=0;
      u128.highest=0;
      u128.high=0;
      s8=0;
      s16=0;
      s32=0;
      s64=0;
      u8=0;
      u16=0;
      u64=0;
      f16=0;
      f32=0;
      f64=0;
      pred=0;
      u32 = x;
   }
   operator unsigned int() { return u32;}
   operator unsigned short() { return u16;}
   operator unsigned char() { return u8;}
   operator unsigned long long() { return u64;}

   void mask_and( unsigned ms, unsigned ls )
   {
      bits.ms &= ms;
      bits.ls &= ls;
   }

   void mask_or( unsigned ms, unsigned ls )
   {
      bits.ms |= ms;
      bits.ls |= ls;
   }
   int get_bit( unsigned bit )
   {
      if ( bit < 32 )
         return(bits.ls >> bit) & 1;
      else
         return(bits.ms >> (bit-32)) & 1;
   }

   signed char       s8;
   signed short      s16;
   signed int        s32;
   signed long long  s64;
   unsigned char     u8;
   unsigned short    u16;
   unsigned int      u32;
   unsigned long long   u64;
   float             f16; 
   float          f32;
   double            f64;
   struct {
      unsigned ls;
      unsigned ms;
   } bits;
   struct {
       unsigned int lowest;
       unsigned int low;
       unsigned int high;
       unsigned int highest;
   } u128;
   unsigned       pred : 4;

};

class ptx_thread_info;
class symbol;

namespace dao_sim{


enum class REG_STATUS
{
	IN_VALID,
	VALID
};

class Reg {
public:
	Reg() {}
	~Reg();

	REG_STATUS status = REG_STATUS::IN_VALID;
	ptx_reg_t value;

	void set(const ptx_reg_t &v) {
		value = v;
		status = REG_STATUS::VALID;
	}

	bool is_inited() {
		return status != REG_STATUS::IN_VALID;
	}

   bool is_valid() {
		return status != REG_STATUS::IN_VALID;
	}
};




class RegFile {
public:

   RegFile(size_t reg_nums) {
      _registers.resize(reg_nums);
   }
   
	~RegFile();

   ptx_reg_t get_reg(const ptx_thread_info* thread, const symbol* reg);
   void set_reg(const ptx_thread_info* thread, const symbol* reg, ptx_reg_t value);

   Reg get_reg(unsigned index) {return _registers[index];}


private:
   std::vector<Reg> _registers;
};


}


#endif //DAO_REG
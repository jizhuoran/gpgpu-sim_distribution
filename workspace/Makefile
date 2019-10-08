NVCC = /usr/local/cuda/bin/nvcc

all: vecadd

vecadd : vecadd.cu
	$(NVCC) vecadd.cu --compiler-options -fPIC -o vecadd

clean:
	rm -rf *.o *.a vecadd

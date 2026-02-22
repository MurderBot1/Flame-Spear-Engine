#include "compute/gpu/GpuComputePipeline.h"

namespace FSE::Compute::GPU {
    GpuComputePipeline::GpuComputePipeline() : index(0) {

    }

    void GpuComputePipeline::addData(uint64_t ptr, int& outIndex) {
        ptrs[index] = ptr;
        outIndex = index;
        index++;
    }
}
#ifndef GpuComputePipeline_H
#define GpuComputePipeline_H

#include "vulkan/vulkan.h"

#include <array>
#include <cstdint>

namespace FSE::Compute::GPU {
    class GpuComputePipeline {
      public:
        GpuComputePipeline();
        void addData(uint64_t ptr, int& outIndex);

      private:
        std::array<uint64_t, 2048> ptrs;
        int index;
    };
} // namespace FSE::Compute::GPU

#endif
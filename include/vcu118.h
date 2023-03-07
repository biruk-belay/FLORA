#ifndef VCU118_DEF_H
#define VCU118_DEF_H

#include "fpga.h" 

#define VCU118_CLK_REG 28
#define VCU118_WIDTH 188
#define VCU118_NUM_ROWS 20
#define VCU118_FORBIDDEN 3
#define VCU118_CLB_PER_TILE 60
#define VCU118_BRAM_PER_TILE 12
#define VCU118_DSP_PER_TILE 24
#define VCU118_CLB_TOT  45525
#define VCU118_BRAM_TOT  1030
#define VCU118_DSP_TOT  2800

class vcu118
{
public:
    int clb_per_tile  = VCU118_CLB_PER_TILE;
    int bram_per_tile = VCU118_BRAM_PER_TILE;
    int dsp_per_tile  = VCU118_DSP_PER_TILE;
    int num_clk_reg   = VCU118_CLK_REG;
    unsigned long width  = VCU118_WIDTH;
//    void initialize_clk_reg();
    vcu118();
};
#endif


/* LEVEL_21:0x09BC78 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_00240270;

void func_09BC78(void)
{
    D_00240270.w20 = 2;
    D_00240270.w24 = 2;
}

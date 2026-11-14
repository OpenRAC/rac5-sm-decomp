/* LEVEL_22:0x0A9AD8 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_0027E5F0;

void func_0A9AD8(void)
{
    D_0027E5F0.w20 = 2;
    D_0027E5F0.w24 = 2;
}

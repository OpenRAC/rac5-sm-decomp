/* LEVEL_20:0x094BB0 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_0019A1B0;

void func_094BB0(void)
{
    D_0019A1B0.w20 = 2;
    D_0019A1B0.w24 = 2;
}

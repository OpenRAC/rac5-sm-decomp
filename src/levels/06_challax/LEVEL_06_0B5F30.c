/* LEVEL_06:0x0B5F30 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_003157B0;

void func_0B5F30(void)
{
    D_003157B0.w20 = 2;
    D_003157B0.w24 = 2;
}

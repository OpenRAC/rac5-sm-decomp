/* LEVEL_03:0x0BB418 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_003438B0;

void func_0BB418(void)
{
    D_003438B0.w20 = 2;
    D_003438B0.w24 = 2;
}

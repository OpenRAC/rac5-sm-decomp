/* LEVEL_02:0x0C1F40 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_0033FF30;

void func_0C1F40(void)
{
    D_0033FF30.w20 = 2;
    D_0033FF30.w24 = 2;
}

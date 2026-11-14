/* LEVEL_08:0x0C6520 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_00377CB0;

void func_0C6520(void)
{
    D_00377CB0.w20 = 2;
    D_00377CB0.w24 = 2;
}

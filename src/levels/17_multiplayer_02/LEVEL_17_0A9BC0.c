/* LEVEL_17:0x0A9BC0 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_00267C70;

void func_0A9BC0(void)
{
    D_00267C70.w20 = 2;
    D_00267C70.w24 = 2;
}

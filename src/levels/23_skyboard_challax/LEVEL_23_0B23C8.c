/* LEVEL_23:0x0B23C8 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_002F9E70;

void func_0B23C8(void)
{
    D_002F9E70.w20 = 2;
    D_002F9E70.w24 = 2;
}

/* LEVEL_24:0x0B4EC0 -- placement copy of LEVEL_01_0BB630.c: sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_002F48F0;

void func_0B4EC0(void)
{
    D_002F48F0.w20 = 2;
    D_002F48F0.w24 = 2;
}

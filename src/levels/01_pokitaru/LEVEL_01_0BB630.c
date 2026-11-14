/* LEVEL_01:0x0BB630 -- sets two mode words of the global block to 2. */
struct Blk_0BB630 {
    char pad_00[0x20];
    int w20;
    int w24;
};

extern struct Blk_0BB630 D_00328A30;

void func_0BB630(void)
{
    D_00328A30.w20 = 2;
    D_00328A30.w24 = 2;
}

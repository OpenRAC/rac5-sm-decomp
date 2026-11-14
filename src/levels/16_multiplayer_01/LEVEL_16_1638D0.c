/* LEVEL_16:0x1638D0 -- clears the global when it holds the given value. */
extern int D_001BDFA4;

void func_1638D0(int value)
{
    if (D_001BDFA4 == value)
        D_001BDFA4 = 0;
}

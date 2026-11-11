/* LEVEL_01:0x10F6A8 -- reserves an amount from a capacity block when it fits, updating two counters. */
typedef struct CapBlock { unsigned int pad_00[2]; unsigned int f08; unsigned int f0C; unsigned int f10; } CapBlock;
extern CapBlock D_00331738;
int func_10F6A8(int p, int amount)
{
    unsigned int needed = amount - (D_00331738.f08 - D_00331738.f0C);
    if (needed > D_00331738.f10)
        return 0;
    D_00331738.f08 = D_00331738.f0C + amount;
    D_00331738.f10 -= needed;
    return 1;
}

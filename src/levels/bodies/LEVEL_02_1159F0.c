/* LEVEL_02:0x1159F0 -- placement copy of LEVEL_01_10F6A8.c: reserves an amount from a capacity block when it fits, updating two counters. */
typedef struct CapBlock { unsigned int pad_00[2]; unsigned int f08; unsigned int f0C; unsigned int f10; } CapBlock;
extern CapBlock D_00348C38;
int func_1159F0(long long unused, int amount)
{
    unsigned int needed = amount - (D_00348C38.f08 - D_00348C38.f0C);
    if (needed > D_00348C38.f10)
        return 0;
    D_00348C38.f08 = D_00348C38.f0C + amount;
    D_00348C38.f10 -= needed;
    return 1;
}

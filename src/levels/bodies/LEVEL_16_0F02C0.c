/* LEVEL_16:0x0F02C0 -- placement copy of LEVEL_01_10F6A8.c: reserves an amount from a capacity block when it fits, updating two counters. */
typedef struct CapBlock { unsigned int pad_00[2]; unsigned int f08; unsigned int f0C; unsigned int f10; } CapBlock;
extern CapBlock D_0027F5E8;
int func_0F02C0(int p, int amount)
{
    unsigned int needed = amount - (D_0027F5E8.f08 - D_0027F5E8.f0C);
    if (needed > D_0027F5E8.f10)
        return 0;
    D_0027F5E8.f08 = D_0027F5E8.f0C + amount;
    D_0027F5E8.f10 -= needed;
    return 1;
}

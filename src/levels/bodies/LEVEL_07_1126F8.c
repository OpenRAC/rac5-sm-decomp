/* LEVEL_07:0x1126F8 -- placement copy of LEVEL_01_10F6A8.c: reserves an amount from a capacity block when it fits, updating two counters. */
typedef struct CapBlock { unsigned int pad_00[2]; unsigned int f08; unsigned int f0C; unsigned int f10; } CapBlock;
extern CapBlock D_00347038;
int func_1126F8(int p, int amount)
{
    unsigned int needed = amount - (D_00347038.f08 - D_00347038.f0C);
    if (needed > D_00347038.f10)
        return 0;
    D_00347038.f08 = D_00347038.f0C + amount;
    D_00347038.f10 -= needed;
    return 1;
}

/* LEVEL_10:0x0B2608 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_00205154;
extern int D_0020517C;
extern int D_00205184;
static __inline__ void DecNonzero(unsigned int *value)
{
    if (*value != 0) --*value;
}
static __inline__ void LimitMax(int *value, int limit)
{
    if (*value > limit) *value = limit;
}
static __inline__ void LimitMin(int *value, int limit)
{
    if (*value < limit) *value = limit;
}
void func_0B2608(void)
{
    DecNonzero(&D_00205154);
    D_0020517C = D_00205154 == 0 ? D_0020517C - 8 : D_0020517C + 8;
    LimitMax(&D_0020517C, 255);
    LimitMin(&D_0020517C, 0);
    D_00205184 = 0;
}

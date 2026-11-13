/* LEVEL_02:0x0B7E00 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_00211114;
extern int D_0021113C;
extern int D_00211144;
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
void func_0B7E00(void)
{
    DecNonzero(&D_00211114);
    D_0021113C = D_00211114 == 0 ? D_0021113C - 8 : D_0021113C + 8;
    LimitMax(&D_0021113C, 255);
    LimitMin(&D_0021113C, 0);
    D_00211144 = 0;
}

/* LEVEL_05:0x0AFAB0 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_001EB4D4;
extern int D_001EB4FC;
extern int D_001EB504;
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
void func_0AFAB0(void)
{
    DecNonzero(&D_001EB4D4);
    D_001EB4FC = D_001EB4D4 == 0 ? D_001EB4FC - 8 : D_001EB4FC + 8;
    LimitMax(&D_001EB4FC, 255);
    LimitMin(&D_001EB4FC, 0);
    D_001EB504 = 0;
}

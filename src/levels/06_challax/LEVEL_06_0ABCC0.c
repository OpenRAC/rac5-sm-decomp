/* LEVEL_06:0x0ABCC0 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_001EB054;
extern int D_001EB07C;
extern int D_001EB084;
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
void func_0ABCC0(void)
{
    DecNonzero(&D_001EB054);
    D_001EB07C = D_001EB054 == 0 ? D_001EB07C - 8 : D_001EB07C + 8;
    LimitMax(&D_001EB07C, 255);
    LimitMin(&D_001EB07C, 0);
    D_001EB084 = 0;
}

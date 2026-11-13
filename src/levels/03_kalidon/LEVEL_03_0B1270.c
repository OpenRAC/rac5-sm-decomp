/* LEVEL_03:0x0B1270 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_002147D4;
extern int D_002147FC;
extern int D_00214804;
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
void func_0B1270(void)
{
    DecNonzero(&D_002147D4);
    D_002147FC = D_002147D4 == 0 ? D_002147FC - 8 : D_002147FC + 8;
    LimitMax(&D_002147FC, 255);
    LimitMin(&D_002147FC, 0);
    D_00214804 = 0;
}

/* LEVEL_07:0x0B34F0 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_00210454;
extern int D_0021047C;
extern int D_00210484;
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
void func_0B34F0(void)
{
    DecNonzero(&D_00210454);
    D_0021047C = D_00210454 == 0 ? D_0021047C - 8 : D_0021047C + 8;
    LimitMax(&D_0021047C, 255);
    LimitMin(&D_0021047C, 0);
    D_00210484 = 0;
}

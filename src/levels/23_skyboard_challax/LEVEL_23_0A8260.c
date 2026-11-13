/* LEVEL_23:0x0A8260 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_001CF554;
extern int D_001CF57C;
extern int D_001CF584;
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
void func_0A8260(void)
{
    DecNonzero(&D_001CF554);
    D_001CF57C = D_001CF554 == 0 ? D_001CF57C - 8 : D_001CF57C + 8;
    LimitMax(&D_001CF57C, 255);
    LimitMin(&D_001CF57C, 0);
    D_001CF584 = 0;
}

/* LEVEL_22:0x09FB00 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_0015B4D4;
extern int D_0015B4FC;
extern int D_0015B504;
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
void func_09FB00(void)
{
    DecNonzero(&D_0015B4D4);
    D_0015B4FC = D_0015B4D4 == 0 ? D_0015B4FC - 8 : D_0015B4FC + 8;
    LimitMax(&D_0015B4FC, 255);
    LimitMin(&D_0015B4FC, 0);
    D_0015B504 = 0;
}

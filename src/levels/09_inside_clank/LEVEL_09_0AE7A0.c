/* LEVEL_09:0x0AE7A0 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_001E5F54;
extern int D_001E5F7C;
extern int D_001E5F84;
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
void func_0AE7A0(void)
{
    DecNonzero(&D_001E5F54);
    D_001E5F7C = D_001E5F54 == 0 ? D_001E5F7C - 8 : D_001E5F7C + 8;
    LimitMax(&D_001E5F7C, 255);
    LimitMin(&D_001E5F7C, 0);
    D_001E5F84 = 0;
}

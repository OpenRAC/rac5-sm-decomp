/* LEVEL_15:0x091DB8 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_00150DD4;
extern int D_00150DFC;
extern int D_00150E04;
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
void func_091DB8(void)
{
    DecNonzero(&D_00150DD4);
    D_00150DFC = D_00150DD4 == 0 ? D_00150DFC - 8 : D_00150DFC + 8;
    LimitMax(&D_00150DFC, 255);
    LimitMin(&D_00150DFC, 0);
    D_00150E04 = 0;
}

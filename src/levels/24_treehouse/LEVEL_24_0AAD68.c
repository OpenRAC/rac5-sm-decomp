/* LEVEL_24:0x0AAD68 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_001CCDD4;
extern int D_001CCDFC;
extern int D_001CCE04;
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
void func_0AAD68(void)
{
    DecNonzero(&D_001CCDD4);
    D_001CCDFC = D_001CCDD4 == 0 ? D_001CCDFC - 8 : D_001CCDFC + 8;
    LimitMax(&D_001CCDFC, 255);
    LimitMin(&D_001CCDFC, 0);
    D_001CCE04 = 0;
}

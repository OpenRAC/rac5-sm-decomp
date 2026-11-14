/* LEVEL_16:0x09FEE0 -- counts a timer down, steps a value toward 0 or 255 and clears a flag. */
extern unsigned int D_001AA194;
extern int D_001AA1BC;
extern int D_001AA1C4;
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
void func_09FEE0(void)
{
    DecNonzero(&D_001AA194);
    D_001AA1BC = D_001AA194 == 0 ? D_001AA1BC - 8 : D_001AA1BC + 8;
    LimitMax(&D_001AA1BC, 255);
    LimitMin(&D_001AA1BC, 0);
    D_001AA1C4 = 0;
}

/* LEVEL_17:0x09F3D8 -- placement copy of LEVEL_16_09FEE0.c: counts a timer down, steps a value toward 0 or 255 and clears a flag. */
extern unsigned int D_0019D794;
extern int D_0019D7BC;
extern int D_0019D7C4;
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
void func_09F3D8(void)
{
    DecNonzero(&D_0019D794);
    D_0019D7BC = D_0019D794 == 0 ? D_0019D7BC - 8 : D_0019D7BC + 8;
    LimitMax(&D_0019D7BC, 255);
    LimitMin(&D_0019D7BC, 0);
    D_0019D7C4 = 0;
}

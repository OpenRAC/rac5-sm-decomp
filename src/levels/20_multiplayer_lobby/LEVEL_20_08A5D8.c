/* LEVEL_20:0x08A5D8 -- placement copy of LEVEL_16_09FEE0.c: counts a timer down, steps a value toward 0 or 255 and clears a flag. */
extern unsigned int D_0010C874;
extern int D_0010C89C;
extern int D_0010C8A4;
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
void func_08A5D8(void)
{
    DecNonzero(&D_0010C874);
    D_0010C89C = D_0010C874 == 0 ? D_0010C89C - 8 : D_0010C89C + 8;
    LimitMax(&D_0010C89C, 255);
    LimitMin(&D_0010C89C, 0);
    D_0010C8A4 = 0;
}

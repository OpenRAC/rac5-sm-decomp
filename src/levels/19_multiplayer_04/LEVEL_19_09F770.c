/* LEVEL_19:0x09F770 -- placement copy of LEVEL_16_09FEE0.c: counts a timer down, steps a value toward 0 or 255 and clears a flag. */
extern unsigned int D_001AB314;
extern int D_001AB33C;
extern int D_001AB344;
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
void func_09F770(void)
{
    DecNonzero(&D_001AB314);
    D_001AB33C = D_001AB314 == 0 ? D_001AB33C - 8 : D_001AB33C + 8;
    LimitMax(&D_001AB33C, 255);
    LimitMin(&D_001AB33C, 0);
    D_001AB344 = 0;
}

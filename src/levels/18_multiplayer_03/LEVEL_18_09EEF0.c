/* LEVEL_18:0x09EEF0 -- placement copy of LEVEL_16_09FEE0.c: counts a timer down, steps a value toward 0 or 255 and clears a flag. */
extern unsigned int D_001AB614;
extern int D_001AB63C;
extern int D_001AB644;
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
void func_09EEF0(void)
{
    DecNonzero(&D_001AB614);
    D_001AB63C = D_001AB614 == 0 ? D_001AB63C - 8 : D_001AB63C + 8;
    LimitMax(&D_001AB63C, 255);
    LimitMin(&D_001AB63C, 0);
    D_001AB644 = 0;
}

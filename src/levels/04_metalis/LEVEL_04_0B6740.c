/* LEVEL_04:0x0B6740 -- placement copy of LEVEL_01_0B14F0.c. */
extern unsigned int D_00215614;
extern int D_0021563C;
extern int D_00215644;
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
void func_0B6740(void)
{
    DecNonzero(&D_00215614);
    D_0021563C = D_00215614 == 0 ? D_0021563C - 8 : D_0021563C + 8;
    LimitMax(&D_0021563C, 255);
    LimitMin(&D_0021563C, 0);
    D_00215644 = 0;
}

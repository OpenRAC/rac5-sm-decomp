extern unsigned int D_001FC154;
extern int D_001FC17C;
extern int D_001FC184;
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
void func_0B14F0(void)
{
    DecNonzero(&D_001FC154);
    D_001FC17C = D_001FC154 == 0 ? D_001FC17C - 8 : D_001FC17C + 8;
    LimitMax(&D_001FC17C, 255);
    LimitMin(&D_001FC17C, 0);
    D_001FC184 = 0;
}

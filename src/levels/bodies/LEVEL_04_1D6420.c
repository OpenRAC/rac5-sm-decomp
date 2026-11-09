/* LEVEL_04:0x1D6420 -- placement copy of LEVEL_08_1FB3A0.c. */
/* LEVEL_08:1FB3A0 -- scales the block's three fields by thirty and hands the
   vector to the level's routine. */
extern unsigned int func_003258(void);
extern void func_012290(float *a0);
void func_1D6420(void)
{
    float *p = (float *)(func_003258() + 0x20);
    float v[3];

    v[0] = p[0] * 30.0f;
    v[1] = p[1] * 30.0f;
    v[2] = p[2] * 30.0f;
    func_012290(v);
}

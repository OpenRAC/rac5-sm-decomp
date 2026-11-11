/* LEVEL_08:1FB3A0 -- scales the block's three fields by thirty and hands the
   vector to the level's routine. */
extern char *func_003480(void);
extern void func_0124E0(float *a0);
void func_1FB3A0(void)
{
    float *p = (float *)(func_003480() + 0x20);
    float v[3];

    v[0] = p[0] * 30.0f;
    v[1] = p[1] * 30.0f;
    v[2] = p[2] * 30.0f;
    func_0124E0(v);
}

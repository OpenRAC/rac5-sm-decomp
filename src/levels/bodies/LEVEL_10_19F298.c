/* LEVEL_10:0x19F298 -- computes two scale values from a record and calls the render helpers. */
extern float func_001168(void);
extern void func_0037D8(void *a, int b, float c, float d);
extern void func_003960(int a);
extern void func_0034C8(int a, int b, float c, float d);

void func_19F298(char *a0)
{
    char *s0;
    char *s1;
    float one = 1.0f;
    float k;
    float f;

    s1 = *(char **)(a0 + 0x58);
    s0 = a0 + 0x30;
    f = func_001168();
    func_0037D8(s0, 0, one, -f);
    func_003960(0);
    k = one - *(float *)(s1 + 0x74) / 7.0f;
    k = k + k;
    func_0034C8(101, 3, k + 2.0f, one);
}

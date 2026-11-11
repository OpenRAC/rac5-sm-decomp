/* LEVEL_06:0x181A78 -- evaluates a scaled magnitude test on a helper result and applies a vector transform when it is not near zero. */

char *func_080CF0(int size);
char *func_081050(char *p);
float func_033ED8(int v);
void func_11A728(float *out, float f);
void func_11BF00(char *a0, char *a1, float *a2);

void func_181A78(char *obj)
{
    char *s0;
    float f20;
    float tmp[12];
    int v;

    s0 = func_080CF0(0x10);
    f20 = func_033ED8((int)func_081050(s0));
    func_033ED8(*(unsigned char *)(s0 + 0x9));
    v = (__builtin_fabsf(f20) <= 0.00001f);
    if ((unsigned char)v == 0) {
        func_11A728(tmp, f20 * 0.04f);
        func_11BF00(obj, obj, tmp);
    }
}

/* LEVEL_04:0x1D7428 -- checks a sub-record flag and tests a squared magnitude against a small epsilon; calls a helper otherwise. */

void func_07FAE8(char *obj, int a1);
extern float fabsf(float x);

float func_1D7428(char *obj)
{
    char *e;
    char *q;
    char *t;
    float x;
    float y;
    float d;
    unsigned char ok;
    int r;

    e = (char *)(*(unsigned char *)(obj + 0x44) * 0x34 + (int)*(char **)(*(char **)(obj + 0x40) + 4));
    q = *(char **)(e + 0x0C);
    if (q == 0) {
        goto fail;
    }
    if (*(unsigned char *)q != 1) {
        goto fail;
    }
    t = *(char **)(q + 4);
    if (*(int *)t != 0) {
        goto fail;
    }
    x = *(float *)(t + 4);
    y = *(float *)(t + 0x0C);
    d = x * x + y * y;
    r = fabsf(d) <= 9.999999747378752e-06f;
    ok = r;
    if (ok != 0) {
        goto success;
    }
fail:
    func_07FAE8(obj, 1);
    return 0.0f;
success:
    return *(float *)(t + 0x14);
}

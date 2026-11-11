/* LEVEL_01:0x16CB60 -- checks a weighted sum of a record entry against 0.8 and dispatches one of two helpers. */

extern void func_013878(char *a, char *b, char *c, float *d, char *e);
extern int func_0307B0(char *a, char *b, char *c, float *d, int e);

int func_16CB60(char *a0, unsigned int a1, char *a2)
{
    char *rec;
    char *obj;
    char *x;
    float *v;
    float buf[3];
    float dot;
    int r;

    rec = *(char **)(a0 + 0x58) + a1 * 0x1C;
    obj = *(char **)rec;
    x = *(char **)(rec + 4);
    v = (float *)(obj + 0x20);
    buf[0] = *(float *)(rec + 8);
    buf[2] = *(float *)(rec + 0xC);
    buf[1] = 0.0f;
    dot = buf[0] * v[0] + v[1] * buf[1] + buf[2] * v[2];
    if (dot < 0.8f) {
        func_013878(obj, x + 8, x + 0xC, buf, a2 + 0xC);
    } else {
        r = func_0307B0(x, obj, a2, v, 0);
        if (r != 0) {
            return 1;
        }
    }
    return 0;
}

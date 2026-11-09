/* LEVEL_04:0x01FBC8 -- placement copy of LEVEL_01_01FF48.c: sweeps a moving point against a list of shapes and writes back the updated fraction. */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_132058(float *out, float *v, float *s);
extern int func_125E78(float *x, void *b, void *c, void *d, float *t, float xv, float rr);
extern int func_128540(float *x, void *b, void *c, void *d, float *t, float xv, float f, float g);
extern int func_127798(float *x, void *b, void *c, void *d, float *t, float *s, float *v0, float *v1, float *v2,
                       float xv, float lenq);

int func_01FBC8(float *out, void *b, void *c, void *d, Shape *items, int n, float *v, float x)
{
    float tmp[4];
    float lenq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    Shape *end = items + n;
    int result = 0;

    for (; items != end; items++) {
        float *s;

        switch (items->type) {
        case 0: {
            float r;

            s = items->s;
            r = s[4] * sqrtf(lenq);
            func_132058(tmp, v, s);
            if (func_125E78(&x, b, c, d, tmp, x, r * r))
                result = 1;
            break;
        }
        case 4: {
            float f;
            float g;
            float q;

            s = items->s;
            q = sqrtf(lenq);
            f = s[4] * q;
            g = s[5] * q;
            func_132058(tmp, v, s);
            if (func_128540(&x, b, c, d, tmp, x, f, g))
                result = 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_132058(tmp, v, items->s);
            if ((unsigned char)func_127798(&x, b, c, d, tmp, s, v, v + 4, v + 8, x, lenq))
                result = 1;
            break;
        }
    }
    *out = x;
    return result;
}

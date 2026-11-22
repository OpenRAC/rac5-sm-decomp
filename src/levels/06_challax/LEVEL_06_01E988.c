/* LEVEL_06:0x01E988 -- placement copy of LEVEL_01_020188.c: tests each record of a shape list against a scaled vector and reports the first hit. */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_11C388(float *out, float *vec, float *s);
extern int func_1112F0(int a, int b, float scale, float r2, float *dir);
extern int func_113410(int a, int b, float scale, float r, float h, float *dir);
extern int func_1126D0(float *out, int a, int b, float scale, float *dir, float *param, float *v, float *v4, float *v8, float len2);

int func_01E988(float scale, int a, int b, Shape *items, int n, float *v)
{
    float tmp[8];
    float lenq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    Shape *end = items + n;

    for (; items != end; items++) {
        float *s;

        switch (items->type) {
        case 0: {
            float r;

            s = items->s;
            r = s[4] * sqrtf(lenq);
            func_11C388(tmp, v, s);
            if (func_1112F0(a, b, scale, r * r, tmp))
                return 1;
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
            func_11C388(tmp, v, s);
            if (func_113410(a, b, scale, f, g, tmp))
                return 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_11C388(tmp, v, items->s);
            if ((unsigned char)func_1126D0(tmp + 4, a, b, scale, tmp, s, v, v + 4, v + 8, lenq))
                return 1;
            break;
        }
    }
    return 0;
}

/* LEVEL_18:0x01D8C0 -- placement copy of LEVEL_01_020188.c: tests each record of a shape list against a scaled vector and reports the first hit. */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_102DB8(float *out, float *vec, float *s);
extern int func_0F9C48(int a, int b, float scale, float r2, float *dir);
extern int func_0FBAD0(int a, int b, float scale, float r, float h, float *dir);
extern int func_0FAEA8(float *out, int a, int b, float scale, float *dir, float *param, float *v, float *v4, float *v8, float len2);

int func_01D8C0(float scale, int a, int b, Shape *items, int n, float *v)
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
            func_102DB8(tmp, v, s);
            if (func_0F9C48(a, b, scale, r * r, tmp))
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
            func_102DB8(tmp, v, s);
            if (func_0FBAD0(a, b, scale, f, g, tmp))
                return 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_102DB8(tmp, v, items->s);
            if ((unsigned char)func_0FAEA8(tmp + 4, a, b, scale, tmp, s, v, v + 4, v + 8, lenq))
                return 1;
            break;
        }
    }
    return 0;
}

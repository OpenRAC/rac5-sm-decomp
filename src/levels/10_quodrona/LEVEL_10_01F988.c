/* LEVEL_10:0x01F988 -- placement copy of LEVEL_01_020188.c: tests each record of a shape list against a scaled vector and reports the first hit. */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_123D68(float *out, float *vec, float *s);
extern int func_118F38(int a, int b, float scale, float r2, float *dir);
extern int func_11B058(int a, int b, float scale, float r, float h, float *dir);
extern int func_11A318(float *out, int a, int b, float scale, float *dir, float *param, float *v, float *v4, float *v8, float len2);

int func_01F988(float scale, int a, int b, Shape *items, int n, float *v)
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
            func_123D68(tmp, v, s);
            if (func_118F38(a, b, scale, r * r, tmp))
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
            func_123D68(tmp, v, s);
            if (func_11B058(a, b, scale, f, g, tmp))
                return 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_123D68(tmp, v, items->s);
            if ((unsigned char)func_11A318(tmp + 4, a, b, scale, tmp, s, v, v + 4, v + 8, lenq))
                return 1;
            break;
        }
    }
    return 0;
}

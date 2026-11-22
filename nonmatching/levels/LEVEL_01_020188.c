/* USA LEVEL_01.REL:0x020188, 508-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 15 differing words; first difference at 0xE8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_125E78(float *out, float *vec, float *s);
extern int func_11AD20(float scale, float r2, int a, int b, float *dir);
extern int func_11CDA8(float scale, float r, float h, int a, int b, float *dir);
extern int func_11C068(float scale, float len2, float *out, int a, int b, float *dir, float *param, float *v, float *v4, float *v8);

int func_020188(float scale, int a, int b, Shape *items, int n, float *v)
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
            func_125E78(tmp, v, s);
            if (func_11AD20(scale, r * r, a, b, tmp))
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
            func_125E78(tmp, v, s);
            if (func_11CDA8(scale, f, g, a, b, tmp))
                return 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_125E78(tmp, v, items->s);
            if ((unsigned char)func_11C068(scale, lenq, tmp + 4, a, b, tmp, s, v, v + 4, v + 8))
                return 1;
            break;
        }
    }
    return 0;
}

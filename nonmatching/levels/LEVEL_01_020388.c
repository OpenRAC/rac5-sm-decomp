/* USA LEVEL_01.REL:0x020388, 484-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0xE4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int type;
    float s[9];
} Shape;

typedef struct {
    float x;
} Head;

extern float sqrtf(float);
extern void func_125E78(float *out, float *v, float *s);
extern void func_11AE30(Head *a, float x, float *out, float r);
extern void func_11D020(Head *a, float x, float *out, float f, float g);
extern int func_11C280(float *out, Head *a, float x, float *tmp, float *s, float *v0, float *v1, float *v2, float lenq);

int func_020388(Head *a, Shape *items, int n, float *v, float x)
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
            func_11AE30(a, x, tmp, r * r);
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
            func_11D020(a, x, tmp, f, g);
            break;
        }
        case 5:
            s = items->s + 4;
            func_125E78(tmp, v, items->s);
            if ((unsigned char)func_11C280(tmp + 4, a, x, tmp, s, v, v + 4, v + 8, lenq))
                return 1;
            break;
        }
    }
    return 0;
}

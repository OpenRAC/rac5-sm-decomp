/* LEVEL_01.REL:0x01FF48: reviewed 572-byte candidate, held for ABI review.
 * Sweeps a moving point against a list of shapes and writes back the updated
 * fraction.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 572/572 bytes and is byte-
 * exact at this and 11 other USA placements, but the prototypes disagree.
 * It declares func_11A910 returning int with (pointer, int, int, int, pointer,
 * float, float), but the accepted LEVEL_01_11A910.c defines it returning int
 * with (pointer, pointer, pointer, pointer, pointer, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int type;
    float s[9];
} Shape;

extern float sqrtf(float);
extern void func_125E78(float *out, float *v, float *s);
extern int func_11A910(float *x, int b, int c, int d, float *t, float xv, float rr);
extern int func_11CA30(float *x, int b, int c, int d, float *t, float xv, float f, float g);
extern int func_11C130(float *x, int b, int c, int d, float *t, float *s, float *v0, float *v1, float *v2,
                       float xv, float lenq);

int func_01FF48(float *out, int b, int c, int d, Shape *items, int n, float *v, float x)
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
            func_125E78(tmp, v, s);
            if (func_11A910(&x, b, c, d, tmp, x, r * r))
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
            func_125E78(tmp, v, s);
            if (func_11CA30(&x, b, c, d, tmp, x, f, g))
                result = 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_125E78(tmp, v, items->s);
            if ((unsigned char)func_11C130(&x, b, c, d, tmp, s, v, v + 4, v + 8, x, lenq))
                result = 1;
            break;
        }
    }
    *out = x;
    return result;
}

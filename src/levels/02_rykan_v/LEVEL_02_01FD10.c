/* LEVEL_02:0x01FD10 -- placement copy of LEVEL_01_01F3B0.c: tests a sphere of radius x at point a against a list of shapes swept by v and reports whether any shape is hit (returns 1 on the first hit, else 0). */
typedef struct {
    int type;
    float s[9];
} Shape;

typedef struct {
    float x;
    float y;
    float z;
} Pt;

extern float sqrtf(float);
extern void func_12C1D8(float *out, float *v, float *s);
extern int func_124180(Pt *a, float r1, float r2, float h, float *b);
extern int func_124058(Pt *a, float *tmp, float *s, float *v0, float *v1, float *v2, float x2, float lenq);

int func_01FD10(float x, Pt *a, Shape *items, int n, float *v)
{
    float tmp[4];
    float lenq;
    Shape *end;
    float *s;
    float r;
    float f;
    float g;
    float q;
    float d;
    int t;

    lenq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    end = items + n;
    for (; items != end; items++) {
        switch (items->type) {
        case 0:
            s = items->s;
            r = s[4] * sqrtf(lenq);
            func_12C1D8(tmp, v, s);
            d = (x + r) * (x + r);
            t = (tmp[0] - a->x) * (tmp[0] - a->x) + (tmp[1] - a->y) * (tmp[1] - a->y) + (tmp[2] - a->z) * (tmp[2] - a->z) < d;
            if ((unsigned char)t) {
                return 1;
            }
            break;
        case 4:
            s = items->s;
            q = sqrtf(lenq);
            f = s[4] * q;
            g = s[5] * q;
            func_12C1D8(tmp, v, s);
            if (func_124180(a, x, f, g, tmp) != 0) {
                return 1;
            }
            break;
        case 5:
            func_12C1D8(tmp, v, items->s);
            if ((unsigned char)func_124058(a, tmp, items->s + 4, v, v + 4, v + 8, x * x, lenq) != 0) {
                return 1;
            }
            break;
        }
    }
    return 0;
}

/* LEVEL_19:0x01D978 -- placement copy of LEVEL_01_01FD30.c: tests shapes against a swept point and reports any hit. */
typedef struct {
    int type;
    float s[9];
} Shape;

typedef struct {
    float x;
} Head;

extern float sqrtf(float);
extern void func_104C00(float *out, float *v, float *s);
extern int func_0FB450(Head *a, int b, int c, float *out, float x, float r);
extern int func_0FCE40(Head *a, int b, int c, float *out, float x, float y, float z);
extern int func_0FCA28(Head *a, int b, int c, float *out, float *s, float *v0, float *v1, float *v2,
                       float x, float r);

int func_01D978(Head *a, int b, int c, Shape *items, int n, float *v)
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
            func_104C00(tmp, v, s);
            if (func_0FB450(a, b, c, tmp, a->x, r * r))
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
            func_104C00(tmp, v, s);
            if (func_0FCE40(a, b, c, tmp, a->x, f, g))
                result = 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_104C00(tmp, v, items->s);
            if ((unsigned char)func_0FCA28(a, b, c, tmp, s, v, v + 4, v + 8, a->x, lenq))
                result = 1;
            break;
        }
    }
    return result;
}

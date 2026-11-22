/* LEVEL_03:0x0200F0 -- placement copy of LEVEL_01_020388.c: tests the shapes of a list against a swept point; stops at the first hit of the box case. */
typedef struct {
    int type;
    float s[9];
} Shape;

typedef struct {
    float x;
} Head;

extern float sqrtf(float);
extern void func_124060(float *out, float *v, float *s);
extern int func_118FA0(Head *a, float x, float *out, float r);
extern int func_11B228(Head *a, float x, float *out, float f, float g);
extern int func_11A488(float *out, Head *a, float x, float *tmp, float *s, float *v0, float *v1, float *v2, float lenq);

int func_0200F0(Head *a, Shape *items, int n, float *v, float x)
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
            func_124060(tmp, v, s);
            if (func_118FA0(a, x, tmp, r * r))
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
            func_124060(tmp, v, s);
            if (func_11B228(a, x, tmp, f, g))
                return 1;
            break;
        }
        case 5:
            s = items->s + 4;
            func_124060(tmp, v, items->s);
            if ((unsigned char)func_11A488(tmp + 4, a, x, tmp, s, v, v + 4, v + 8, lenq))
                return 1;
            break;
        }
    }
    return 0;
}

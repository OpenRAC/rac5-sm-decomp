typedef struct {
    float f00;
    float f04;
} S;

typedef struct {
    float f00;
} T;

int func_0140A0(void *this, float *out, int c, float x);

void func_014050(S *s, T *b, int c, float x)
{
    float v;

    if (func_0140A0(s, &v, c, x)) {
        s->f04 = v;
    }
    if (b) {
        b->f00 = v;
    }
}

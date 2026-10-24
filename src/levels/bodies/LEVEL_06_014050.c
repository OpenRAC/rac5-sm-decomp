typedef struct {
    float f00;
    float f04;
} S;

typedef struct {
    float f00;
} T;

int func_0140A0(void *this, float *out);

void func_014050(S *s, T *b)
{
    float v;

    if (func_0140A0(s, &v)) {
        s->f04 = v;
    }
    if (b) {
        b->f00 = v;
    }
}

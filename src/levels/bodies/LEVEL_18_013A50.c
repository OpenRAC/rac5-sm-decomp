typedef struct {
    float f00;
    float f04;
} S;

typedef struct {
    float f00;
} T;

int func_013AA8(void *this, float *out, int c, int d, int e);

void func_013A50(S *s, T *b, int c)
{
    float v;

    if (func_013AA8(s, &v, c, 0x38, 0)) {
        s->f04 = v;
    }
    if (b) {
        b->f00 = v;
    }
}

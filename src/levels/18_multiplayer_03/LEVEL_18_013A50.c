typedef struct {
    float f00;
    float f04;
} S;

typedef struct {
    float f00;
} T;

int func_013AA8(void *this, float *out, int c, int d, int e);

int func_013A50(S *s, T *b, int c, float f)
{
    float v;
    int r;

    r = func_013AA8(s, &v, c, 0x38, 0);
    if (r) {
        s->f04 = v;
    }
    if (b) {
        b->f00 = v;
    }
    return r;
}

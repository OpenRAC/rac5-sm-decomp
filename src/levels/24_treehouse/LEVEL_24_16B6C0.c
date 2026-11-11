typedef struct {
    char pad00[0xFEC];
    int fFEC;
} Sub2;

typedef struct {
    void *f00;
    char pad04[0x260];
    float f264;
} Sub;

typedef struct {
    char pad00[0x58];
    Sub *f58;
    char pad5C[8];
    int f64;
} Rec;

void func_077408(void *a, int b, int c, int d, float e, float f);

void func_16B6C0(Rec *a0)
{
    Sub *p;
    Sub2 *q;

    p = a0->f58;
    q = p->f00;
    a0->f64 &= 0xFFFBFFFF;
    q->fFEC = 0;
    p->f264 = -1.0f / 6.0f;
    func_077408(a0, 0, 0, 1, 0.1f, 0.0f);
}

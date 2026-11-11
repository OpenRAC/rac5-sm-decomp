/* LEVEL_08:0x02BEE8 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_10BEE0(float, float, int, void *, int);
extern int D_00280B08;
extern char D_0023D078[];
extern char D_002809D0[];

void func_02BEE8(float param, float *vec)
{
    struct {
        float a;
        float b;
        float c;
        float d;
        float e;
        float f;
        float g;
        void *p;
        void *q;
    } s;
    int mode = D_00280B08;
    float n;

    s.p = D_0023D078;
    s.q = D_002809D0;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_10BEE0(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

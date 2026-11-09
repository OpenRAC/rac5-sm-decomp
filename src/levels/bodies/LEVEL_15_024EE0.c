/* LEVEL_15:0x024EE0 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_0CEF48(float, float, int, void *, int);
extern int D_00179A08;
extern char D_00149178[];
extern char D_001798D0[];

void func_024EE0(float param, float *vec)
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
    int mode = D_00179A08;
    float n;

    s.p = D_00149178;
    s.q = D_001798D0;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_0CEF48(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

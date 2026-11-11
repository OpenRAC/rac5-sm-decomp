/* LEVEL_02:0x02BF30 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_105468(float, float, int, void *, int);
extern int D_00248D88;
extern char D_00209178[];
extern char D_00248C50[];

void func_02BF30(float param, float *vec)
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
    int mode = D_00248D88;
    float n;

    s.p = D_00209178;
    s.q = D_00248C50;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_105468(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

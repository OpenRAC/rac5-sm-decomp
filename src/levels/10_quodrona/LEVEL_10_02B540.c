/* LEVEL_10:0x02B540 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_0FEBF8(float, float, int, void *, int);
extern int D_0023AC88;
extern char D_001FD4F8[];
extern char D_0023AB50[];

void func_02B540(float param, float *vec)
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
    int mode = D_0023AC88;
    float n;

    s.p = D_001FD4F8;
    s.q = D_0023AB50;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_0FEBF8(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

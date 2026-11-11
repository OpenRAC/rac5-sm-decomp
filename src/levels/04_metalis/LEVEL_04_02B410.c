/* LEVEL_04:0x02B410 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_1079D0(float, float, int, void *, int);
extern int D_0024C088;
extern char D_0020D678[];
extern char D_0024BF50[];

void func_02B410(float param, float *vec)
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
    int mode = D_0024C088;
    float n;

    s.p = D_0020D678;
    s.q = D_0024BF50;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_1079D0(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

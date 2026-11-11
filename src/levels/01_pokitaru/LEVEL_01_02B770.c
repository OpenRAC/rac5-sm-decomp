/* LEVEL_01:0x02B770 -- fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_0FF2B8(float, float, int, void *, int);
extern int D_00231888;
extern char D_001F44F8[];
extern char D_00231750[];

void func_02B770(float param, float *vec)
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
    int mode = D_00231888;
    float n;

    s.p = D_001F44F8;
    s.q = D_00231750;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_0FF2B8(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

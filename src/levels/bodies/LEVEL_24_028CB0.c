/* LEVEL_24:0x028CB0 -- placement copy of LEVEL_01_02B770.c: fills a small parameter block from a vector and a scale, then calls a helper when floorf of a constant is positive. */
extern float floorf(float);
extern void func_0F6EC8(float, float, int, void *, int);
extern int D_001FD788;
extern char D_001C5178[];
extern char D_001FD650[];

void func_028CB0(float param, float *vec)
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
    int mode = D_001FD788;
    float n;

    s.p = D_001C5178;
    s.q = D_001FD650;
    s.a = vec[0];
    s.b = vec[1];
    s.c = vec[2];
    s.d = param * 0.0f;
    s.e = param * 0.1f;
    s.f = param;
    s.g = param;
    n = floorf(5.9850006f);
    if (0.0f < n) {
        func_0F6EC8(0.75187963f, 0.75187963f, mode, &s, (int)n);
    }
}

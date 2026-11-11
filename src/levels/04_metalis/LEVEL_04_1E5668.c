/* LEVEL_04:0x1E5668 -- resets two global parameter blocks when called with id 0xFFFF. */
typedef struct {
    float a, b, c, d, e, f, g, h, i, j;
    int k;
    float l, m;
    float n;
} Params;

typedef struct {
    int a, b, c;
    float d;
} Head;

extern Head D_003B3E30;
extern Params D_003B3E40;
extern void *memset(void *p, int c, unsigned n);
extern float powf(float x, float y);

void func_1E5668(int enable, int id)
{
    if (id == 0xFFFF && enable) {
        Params p;
        Params *dst = &D_003B3E40;

        D_003B3E30.a = 0;
        D_003B3E30.b = 0;
        D_003B3E30.c = 0;
        D_003B3E30.d = 1.0f;
        memset(&p, 0, sizeof(Params));
        p.a = 0.1f;
        p.b = 0.2f;
        p.c = 0.3f;
        p.d = 0.4f;
        p.e = 15.0f;
        p.f = 22.5f;
        p.g = 0.03333333507180214f;
        p.h = 0.10000000894069672f;
        p.i = 0.0011111112544313073f;
        p.j = 0.20943953096866608f;
        p.k = 0x7F7F7F7F;
        p.l = powf(0.949999988079071f, 1.0f);
        p.m = powf(0.9700000286102295f, 1.0f);
        *dst = p;
    }
}

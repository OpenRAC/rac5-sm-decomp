/* LEVEL_06:0x13CFF0 -- the block of the global is reset and refilled with
   the template and the usual constants, but only for the special flag. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

typedef struct {
    Vec12 v;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    unsigned char f24;
} Body;

extern Head D_0037E7A0;
extern Body D_0037E7B0;
extern float D_0020B368;
extern Vec12 D_0020B570;
extern void *memset(void *s, int c, unsigned int n);

void func_13CFF0(void *p, int flag)
{
    if (flag == 0xFFFF && p != 0)
    {
        D_0037E7A0.a = 0;
        D_0037E7A0.b = 0;
        D_0037E7A0.c = 0;
        D_0037E7A0.d = 1.0f;
        memset(&D_0037E7B0, 0, 40);
        D_0037E7B0.v = D_0020B570;
        D_0037E7B0.f0C = 1.25f;
        D_0037E7B0.f10 = D_0020B368;
        D_0037E7B0.f14 = 0.80000007;
        D_0037E7B0.f18 = 0.7f;
        D_0037E7B0.f1C = 0.99215674f;
        D_0037E7B0.f20 = -0.125f;
        D_0037E7B0.f24 = 1;
    }
}

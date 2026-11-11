/* LEVEL_01:0x140498 -- the block of the global is reset and refilled with
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
    char pad24[1];
    unsigned char f25;
} Body;

extern Head D_00391870;
extern Body D_00391880;
extern float D_0021B860;
extern Vec12 D_0021BA38;
extern void *memset(void *s, int c, unsigned int n);

void func_140498(void *p, int flag)
{
    if (flag == 0xFFFF && p != 0)
    {
        D_00391870.a = 0;
        D_00391870.b = 0;
        D_00391870.c = 0;
        D_00391870.d = 1.0f;
        memset(&D_00391880, 0, 40);
        D_00391880.v = D_0021BA38;
        D_00391880.f0C = 1.25f;
        D_00391880.f10 = D_0021B860;
        D_00391880.f14 = 0.53333336f;
        D_00391880.f18 = 0.7f;
        D_00391880.f1C = 0.99215674f;
        D_00391880.f20 = -0.125f;
        D_00391880.f25 = 1;
    }
}

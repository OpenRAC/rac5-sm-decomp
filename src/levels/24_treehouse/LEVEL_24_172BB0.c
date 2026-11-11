/* LEVEL_24:0x172BB0 -- the block of the global is reset and refilled with
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
} Body;

extern Head D_00360C48;
extern Body D_00360C58;
extern float D_001F19A8;
extern Vec12 D_001F1B28;
extern void *memset(void *s, int c, unsigned int n);

void func_172BB0(void *p, int flag)
{
    if (flag == 0xFFFF && p != 0)
    {
        D_00360C48.a = 0;
        D_00360C48.b = 0;
        D_00360C48.c = 0;
        D_00360C48.d = 1.0f;
        memset(&D_00360C58, 0, 40);
        D_00360C58.v = D_001F1B28;
        D_00360C58.f0C = 1.25f;
        D_00360C58.f10 = D_001F19A8;
        D_00360C58.f14 = 0.53333336f;
        D_00360C58.f18 = 0.7f;
        D_00360C58.f1C = 0.99215674f;
        D_00360C58.f20 = -0.125f;
    }
}

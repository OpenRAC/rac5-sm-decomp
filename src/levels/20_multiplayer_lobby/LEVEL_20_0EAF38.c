/* LEVEL_20:0x0EAF38 -- the block of the global is refreshed from the
   template, but only for the special flag. */
typedef struct {
    float f[16];
} Vec64;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_002033E8;
extern Vec64 D_002033F8;
extern Vec64 D_0012DD00;

void func_0EAF38(void *p, int flag)
{
    if (flag == 0xFFFF && p != 0)
    {
        D_002033E8.d = 1.0f;
        D_002033E8.a = 0;
        D_002033E8.c = 0;
        D_002033E8.b = 0;
        D_002033F8 = D_0012DD00;
    }
}

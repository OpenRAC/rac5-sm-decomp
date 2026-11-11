typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0039F2D0;

void func_139D00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0039F2D0.a = 0;
        D_0039F2D0.d = 1.0f;
        D_0039F2D0.c = 0;
        D_0039F2D0.b = 0;
    }
}

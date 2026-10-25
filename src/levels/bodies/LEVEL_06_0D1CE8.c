typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00319E30;

void func_0D1CE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00319E30.a = 0;
        D_00319E30.d = 1.0f;
        D_00319E30.c = 0;
        D_00319E30.b = 0;
    }
}

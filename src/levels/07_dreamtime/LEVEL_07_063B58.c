typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0024E868;

void func_063B58(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0024E868.a = 0;
        D_0024E868.d = 1.0f;
        D_0024E868.c = 0;
        D_0024E868.b = 0;
    }
}

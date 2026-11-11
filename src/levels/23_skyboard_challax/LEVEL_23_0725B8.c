typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00207AE0;

void func_0725B8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00207AE0.a = 0;
        D_00207AE0.d = 1.0f;
        D_00207AE0.c = 0;
        D_00207AE0.b = 0;
    }
}

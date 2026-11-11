typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0031A4A8;

void func_0E4CE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0031A4A8.a = 0;
        D_0031A4A8.d = 1.0f;
        D_0031A4A8.c = 0;
        D_0031A4A8.b = 0;
    }
}

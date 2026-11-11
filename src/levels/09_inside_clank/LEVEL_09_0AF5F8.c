typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0030F0E8;

void func_0AF5F8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0030F0E8.a = 0;
        D_0030F0E8.d = 1.0f;
        D_0030F0E8.c = 0;
        D_0030F0E8.b = 0;
    }
}

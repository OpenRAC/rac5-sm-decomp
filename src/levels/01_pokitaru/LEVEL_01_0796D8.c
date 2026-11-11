typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0023A3A0;

void func_0796D8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0023A3A0.a = 0;
        D_0023A3A0.d = 1.0f;
        D_0023A3A0.c = 0;
        D_0023A3A0.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0023B7C0;

void func_088998(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0023B7C0.a = 0;
        D_0023B7C0.d = 1.0f;
        D_0023B7C0.c = 0;
        D_0023B7C0.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0038FAA0;

void func_1B46E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0038FAA0.a = 0;
        D_0038FAA0.d = 1.0f;
        D_0038FAA0.c = 0;
        D_0038FAA0.b = 0;
    }
}

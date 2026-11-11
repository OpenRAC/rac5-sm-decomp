typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0036C1C0;

void func_13B640(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0036C1C0.a = 0;
        D_0036C1C0.d = 1.0f;
        D_0036C1C0.c = 0;
        D_0036C1C0.b = 0;
    }
}

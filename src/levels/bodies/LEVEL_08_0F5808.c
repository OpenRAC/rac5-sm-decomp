typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037C998;

void func_0F5808(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037C998.a = 0;
        D_0037C998.d = 1.0f;
        D_0037C998.c = 0;
        D_0037C998.b = 0;
    }
}

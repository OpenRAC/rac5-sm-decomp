typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037C9D8;

void func_0FA830(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037C9D8.a = 0;
        D_0037C9D8.d = 1.0f;
        D_0037C9D8.c = 0;
        D_0037C9D8.b = 0;
    }
}

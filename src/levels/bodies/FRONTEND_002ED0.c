typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0010BE40;

void func_002ED0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0010BE40.a = 0;
        D_0010BE40.d = 1.0f;
        D_0010BE40.c = 0;
        D_0010BE40.b = 0;
    }
}

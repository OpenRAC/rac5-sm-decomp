typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003EB9B8;

void func_220408(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003EB9B8.a = 0;
        D_003EB9B8.d = 1.0f;
        D_003EB9B8.c = 0;
        D_003EB9B8.b = 0;
    }
}

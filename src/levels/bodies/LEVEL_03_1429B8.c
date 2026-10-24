typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC898;

void func_1429B8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC898.a = 0;
        D_003AC898.d = 1.0f;
        D_003AC898.c = 0;
        D_003AC898.b = 0;
    }
}

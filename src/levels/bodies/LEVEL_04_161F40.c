typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AE058;

void func_161F40(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AE058.a = 0;
        D_003AE058.d = 1.0f;
        D_003AE058.c = 0;
        D_003AE058.b = 0;
    }
}

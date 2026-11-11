typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC920;

void func_1A3718(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC920.a = 0;
        D_003AC920.d = 1.0f;
        D_003AC920.c = 0;
        D_003AC920.b = 0;
    }
}

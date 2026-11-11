typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC550;

void func_198BF8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC550.a = 0;
        D_003AC550.d = 1.0f;
        D_003AC550.c = 0;
        D_003AC550.b = 0;
    }
}

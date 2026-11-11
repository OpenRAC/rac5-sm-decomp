typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0035D838;

void func_139558(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0035D838.a = 0;
        D_0035D838.d = 1.0f;
        D_0035D838.c = 0;
        D_0035D838.b = 0;
    }
}

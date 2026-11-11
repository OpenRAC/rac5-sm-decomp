typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0031A3B8;

void func_0D6AE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0031A3B8.a = 0;
        D_0031A3B8.d = 1.0f;
        D_0031A3B8.c = 0;
        D_0031A3B8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0019EFD8;

void func_0BAA88(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0019EFD8.a = 0;
        D_0019EFD8.d = 1.0f;
        D_0019EFD8.c = 0;
        D_0019EFD8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00382BC8;

void func_16A280(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00382BC8.a = 0;
        D_00382BC8.d = 1.0f;
        D_00382BC8.c = 0;
        D_00382BC8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC5E8;

void func_136ED8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC5E8.a = 0;
        D_003AC5E8.d = 1.0f;
        D_003AC5E8.c = 0;
        D_003AC5E8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0017D4D0;

void func_0015B8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0017D4D0.a = 0;
        D_0017D4D0.d = 1.0f;
        D_0017D4D0.c = 0;
        D_0017D4D0.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027ED50;

void func_0B1F00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027ED50.a = 0;
        D_0027ED50.d = 1.0f;
        D_0027ED50.c = 0;
        D_0027ED50.b = 0;
    }
}

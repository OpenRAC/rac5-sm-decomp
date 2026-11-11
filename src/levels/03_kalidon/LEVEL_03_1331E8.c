typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AC570;

void func_1331E8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AC570.a = 0;
        D_003AC570.d = 1.0f;
        D_003AC570.c = 0;
        D_003AC570.b = 0;
    }
}

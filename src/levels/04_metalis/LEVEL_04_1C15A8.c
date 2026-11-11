typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B38B0;

void func_1C15A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B38B0.a = 0;
        D_003B38B0.d = 1.0f;
        D_003B38B0.c = 0;
        D_003B38B0.b = 0;
    }
}

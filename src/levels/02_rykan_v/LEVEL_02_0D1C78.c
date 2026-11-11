typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003434D8;

void func_0D1C78(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003434D8.a = 0;
        D_003434D8.d = 1.0f;
        D_003434D8.c = 0;
        D_003434D8.b = 0;
    }
}

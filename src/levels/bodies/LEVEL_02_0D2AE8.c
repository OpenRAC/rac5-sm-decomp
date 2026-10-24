typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003434F8;

void func_0D2AE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003434F8.a = 0;
        D_003434F8.d = 1.0f;
        D_003434F8.c = 0;
        D_003434F8.b = 0;
    }
}

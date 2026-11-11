typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00391778;

void func_139398(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00391778.a = 0;
        D_00391778.d = 1.0f;
        D_00391778.c = 0;
        D_00391778.b = 0;
    }
}

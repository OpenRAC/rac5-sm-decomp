typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00302AB8;

void func_0F4720(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00302AB8.a = 0;
        D_00302AB8.d = 1.0f;
        D_00302AB8.c = 0;
        D_00302AB8.b = 0;
    }
}

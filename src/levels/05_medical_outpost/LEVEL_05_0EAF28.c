typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00319618;

void func_0EAF28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00319618.a = 0;
        D_00319618.d = 1.0f;
        D_00319618.c = 0;
        D_00319618.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00206038;

void func_0F8178(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00206038.a = 0;
        D_00206038.d = 1.0f;
        D_00206038.c = 0;
        D_00206038.b = 0;
    }
}

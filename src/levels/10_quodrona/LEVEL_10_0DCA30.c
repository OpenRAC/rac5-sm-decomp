typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00336A28;

void func_0DCA30(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00336A28.a = 0;
        D_00336A28.d = 1.0f;
        D_00336A28.c = 0;
        D_00336A28.b = 0;
    }
}

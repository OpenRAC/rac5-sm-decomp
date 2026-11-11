typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00363A88;

void func_145950(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00363A88.a = 0;
        D_00363A88.d = 1.0f;
        D_00363A88.c = 0;
        D_00363A88.b = 0;
    }
}

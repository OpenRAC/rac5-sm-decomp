typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00290B50;

void func_1084B0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00290B50.a = 0;
        D_00290B50.d = 1.0f;
        D_00290B50.c = 0;
        D_00290B50.b = 0;
    }
}

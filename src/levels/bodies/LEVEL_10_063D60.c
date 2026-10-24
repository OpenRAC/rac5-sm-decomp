typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00242548;

void func_063D60(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00242548.a = 0;
        D_00242548.d = 1.0f;
        D_00242548.c = 0;
        D_00242548.b = 0;
    }
}

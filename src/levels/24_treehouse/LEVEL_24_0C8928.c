typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F8798;

void func_0C8928(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F8798.a = 0;
        D_002F8798.d = 1.0f;
        D_002F8798.c = 0;
        D_002F8798.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002441A0;

void func_084398(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002441A0.a = 0;
        D_002441A0.d = 1.0f;
        D_002441A0.c = 0;
        D_002441A0.b = 0;
    }
}

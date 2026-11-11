typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00266F78;

void func_0A01A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00266F78.a = 0;
        D_00266F78.d = 1.0f;
        D_00266F78.c = 0;
        D_00266F78.b = 0;
    }
}

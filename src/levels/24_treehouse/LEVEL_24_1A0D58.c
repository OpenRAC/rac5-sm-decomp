typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00362628;

void func_1A0D58(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00362628.a = 0;
        D_00362628.d = 1.0f;
        D_00362628.c = 0;
        D_00362628.b = 0;
    }
}

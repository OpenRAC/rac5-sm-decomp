typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00381578;

void func_15DBC8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00381578.a = 0;
        D_00381578.d = 1.0f;
        D_00381578.c = 0;
        D_00381578.b = 0;
    }
}

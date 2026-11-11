typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00314C90;

void func_0BE7D8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00314C90.a = 0;
        D_00314C90.d = 1.0f;
        D_00314C90.c = 0;
        D_00314C90.b = 0;
    }
}

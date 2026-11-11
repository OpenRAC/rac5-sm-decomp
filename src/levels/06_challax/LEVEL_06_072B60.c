typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00227120;

void func_072B60(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00227120.a = 0;
        D_00227120.d = 1.0f;
        D_00227120.c = 0;
        D_00227120.b = 0;
    }
}

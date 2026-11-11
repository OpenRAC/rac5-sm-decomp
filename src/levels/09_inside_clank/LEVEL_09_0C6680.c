typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00313618;

void func_0C6680(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00313618.a = 0;
        D_00313618.d = 1.0f;
        D_00313618.c = 0;
        D_00313618.b = 0;
    }
}

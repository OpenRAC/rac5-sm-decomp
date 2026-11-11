typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00253D60;

void func_05A790(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00253D60.a = 0;
        D_00253D60.d = 1.0f;
        D_00253D60.c = 0;
        D_00253D60.b = 0;
    }
}

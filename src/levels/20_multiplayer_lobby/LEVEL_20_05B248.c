typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00144578;

void func_05B248(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00144578.a = 0;
        D_00144578.d = 1.0f;
        D_00144578.c = 0;
        D_00144578.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00365180;

void func_17F7E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00365180.a = 0;
        D_00365180.d = 1.0f;
        D_00365180.c = 0;
        D_00365180.b = 0;
    }
}

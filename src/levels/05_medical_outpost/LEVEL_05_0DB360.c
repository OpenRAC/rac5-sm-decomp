typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00319518;

void func_0DB360(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00319518.a = 0;
        D_00319518.d = 1.0f;
        D_00319518.c = 0;
        D_00319518.b = 0;
    }
}

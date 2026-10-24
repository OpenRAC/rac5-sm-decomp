typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027ED60;

void func_0B2450(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027ED60.a = 0;
        D_0027ED60.d = 1.0f;
        D_0027ED60.c = 0;
        D_0027ED60.b = 0;
    }
}

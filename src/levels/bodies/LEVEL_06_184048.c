typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003839A8;

void func_184048(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003839A8.a = 0;
        D_003839A8.d = 1.0f;
        D_003839A8.c = 0;
        D_003839A8.b = 0;
    }
}

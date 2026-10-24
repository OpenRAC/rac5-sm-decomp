typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037FB78;

void func_1A3490(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037FB78.a = 0;
        D_0037FB78.d = 1.0f;
        D_0037FB78.c = 0;
        D_0037FB78.b = 0;
    }
}

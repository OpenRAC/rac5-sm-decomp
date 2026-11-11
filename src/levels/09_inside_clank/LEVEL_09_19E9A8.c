typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037FB08;

void func_19E9A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037FB08.a = 0;
        D_0037FB08.d = 1.0f;
        D_0037FB08.c = 0;
        D_0037FB08.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0037A860;

void func_0D0F28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0037A860.a = 0;
        D_0037A860.d = 1.0f;
        D_0037A860.c = 0;
        D_0037A860.b = 0;
    }
}

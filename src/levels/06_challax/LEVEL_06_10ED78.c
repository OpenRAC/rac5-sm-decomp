typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0031E558;

void func_10ED78(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0031E558.a = 0;
        D_0031E558.d = 1.0f;
        D_0031E558.c = 0;
        D_0031E558.b = 0;
    }
}

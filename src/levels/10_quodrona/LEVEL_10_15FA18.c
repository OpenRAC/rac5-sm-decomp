typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0039EA90;

void func_15FA18(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0039EA90.a = 0;
        D_0039EA90.d = 1.0f;
        D_0039EA90.c = 0;
        D_0039EA90.b = 0;
    }
}

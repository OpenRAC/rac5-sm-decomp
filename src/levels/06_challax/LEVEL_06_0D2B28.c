typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00319ED0;

void func_0D2B28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00319ED0.a = 0;
        D_00319ED0.d = 1.0f;
        D_00319ED0.c = 0;
        D_00319ED0.b = 0;
    }
}

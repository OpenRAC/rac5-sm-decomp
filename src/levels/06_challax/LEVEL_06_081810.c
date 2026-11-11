typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00228540;

void func_081810(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00228540.a = 0;
        D_00228540.d = 1.0f;
        D_00228540.c = 0;
        D_00228540.b = 0;
    }
}

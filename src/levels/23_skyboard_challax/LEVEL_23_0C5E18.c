typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002FDD18;

void func_0C5E18(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002FDD18.a = 0;
        D_002FDD18.d = 1.0f;
        D_002FDD18.c = 0;
        D_002FDD18.b = 0;
    }
}

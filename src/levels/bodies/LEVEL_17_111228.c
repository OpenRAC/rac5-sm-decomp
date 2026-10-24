typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002D08B0;

void func_111228(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002D08B0.a = 0;
        D_002D08B0.d = 1.0f;
        D_002D08B0.c = 0;
        D_002D08B0.b = 0;
    }
}

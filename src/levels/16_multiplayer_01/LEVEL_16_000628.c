typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DA580;

void func_000628(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DA580.a = 0;
        D_001DA580.d = 1.0f;
        D_001DA580.c = 0;
        D_001DA580.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001D19A0;

void func_02B7A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001D19A0.a = 0;
        D_001D19A0.d = 1.0f;
        D_001D19A0.c = 0;
        D_001D19A0.b = 0;
    }
}

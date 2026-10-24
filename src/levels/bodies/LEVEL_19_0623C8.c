typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EC580;

void func_0623C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EC580.a = 0;
        D_001EC580.d = 1.0f;
        D_001EC580.c = 0;
        D_001EC580.b = 0;
    }
}

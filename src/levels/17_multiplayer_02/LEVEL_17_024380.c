typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001D0F00;

void func_024380(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001D0F00.a = 0;
        D_001D0F00.d = 1.0f;
        D_001D0F00.c = 0;
        D_001D0F00.b = 0;
    }
}

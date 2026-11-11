typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DFD90;

void func_024658(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DFD90.a = 0;
        D_001DFD90.d = 1.0f;
        D_001DFD90.c = 0;
        D_001DFD90.b = 0;
    }
}

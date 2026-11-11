typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003148C0;

void func_0AF148(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003148C0.a = 0;
        D_003148C0.d = 1.0f;
        D_003148C0.c = 0;
        D_003148C0.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003808A8;

void func_109818(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003808A8.a = 0;
        D_003808A8.d = 1.0f;
        D_003808A8.c = 0;
        D_003808A8.b = 0;
    }
}

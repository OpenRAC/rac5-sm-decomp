typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B3470;

void func_1C7EE8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B3470.a = 0;
        D_003B3470.d = 1.0f;
        D_003B3470.c = 0;
        D_003B3470.b = 0;
    }
}

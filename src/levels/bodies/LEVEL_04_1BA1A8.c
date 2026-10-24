typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B3158;

void func_1BA1A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B3158.a = 0;
        D_003B3158.d = 1.0f;
        D_003B3158.c = 0;
        D_003B3158.b = 0;
    }
}

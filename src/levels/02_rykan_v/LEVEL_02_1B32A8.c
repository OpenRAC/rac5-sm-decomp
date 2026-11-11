typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AEEF8;

void func_1B32A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AEEF8.a = 0;
        D_003AEEF8.d = 1.0f;
        D_003AEEF8.c = 0;
        D_003AEEF8.b = 0;
    }
}

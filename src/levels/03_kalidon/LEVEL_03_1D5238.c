typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B3850;

void func_1D5238(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B3850.a = 0;
        D_003B3850.d = 1.0f;
        D_003B3850.c = 0;
        D_003B3850.b = 0;
    }
}

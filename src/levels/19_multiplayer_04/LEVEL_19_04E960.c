typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EB900;

void func_04E960(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EB900.a = 0;
        D_001EB900.d = 1.0f;
        D_001EB900.c = 0;
        D_001EB900.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00364458;

void func_168058(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00364458.a = 0;
        D_00364458.d = 1.0f;
        D_00364458.c = 0;
        D_00364458.b = 0;
    }
}

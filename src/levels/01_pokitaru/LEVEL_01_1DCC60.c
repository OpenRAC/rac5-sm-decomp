typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00398D08;

void func_1DCC60(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00398D08.a = 0;
        D_00398D08.d = 1.0f;
        D_00398D08.c = 0;
        D_00398D08.b = 0;
    }
}

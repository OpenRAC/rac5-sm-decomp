typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00367170;

void func_12CFB0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00367170.a = 0;
        D_00367170.d = 1.0f;
        D_00367170.c = 0;
        D_00367170.b = 0;
    }
}

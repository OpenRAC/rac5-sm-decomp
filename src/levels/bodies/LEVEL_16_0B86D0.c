typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00279DD8;

void func_0B86D0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00279DD8.a = 0;
        D_00279DD8.d = 1.0f;
        D_00279DD8.c = 0;
        D_00279DD8.b = 0;
    }
}

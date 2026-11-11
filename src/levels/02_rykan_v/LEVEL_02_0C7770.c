typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00340410;

void func_0C7770(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00340410.a = 0;
        D_00340410.d = 1.0f;
        D_00340410.c = 0;
        D_00340410.b = 0;
    }
}

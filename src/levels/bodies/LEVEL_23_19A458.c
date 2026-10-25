typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00366628;

void func_19A458(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00366628.a = 0;
        D_00366628.d = 1.0f;
        D_00366628.c = 0;
        D_00366628.b = 0;
    }
}

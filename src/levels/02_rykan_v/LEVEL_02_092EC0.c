typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00256550;

void func_092EC0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00256550.a = 0;
        D_00256550.d = 1.0f;
        D_00256550.c = 0;
        D_00256550.b = 0;
    }
}

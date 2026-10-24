typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00204DE0;

void func_055460(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00204DE0.a = 0;
        D_00204DE0.d = 1.0f;
        D_00204DE0.c = 0;
        D_00204DE0.b = 0;
    }
}

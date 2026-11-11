typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00268010;

void func_0AEC00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00268010.a = 0;
        D_00268010.d = 1.0f;
        D_00268010.c = 0;
        D_00268010.b = 0;
    }
}

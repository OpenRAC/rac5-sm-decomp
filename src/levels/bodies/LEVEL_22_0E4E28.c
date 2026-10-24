typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00287068;

void func_0E4E28(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00287068.a = 0;
        D_00287068.d = 1.0f;
        D_00287068.c = 0;
        D_00287068.b = 0;
    }
}

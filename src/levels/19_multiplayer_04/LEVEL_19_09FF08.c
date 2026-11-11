typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00275DE8;

void func_09FF08(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00275DE8.a = 0;
        D_00275DE8.d = 1.0f;
        D_00275DE8.c = 0;
        D_00275DE8.b = 0;
    }
}

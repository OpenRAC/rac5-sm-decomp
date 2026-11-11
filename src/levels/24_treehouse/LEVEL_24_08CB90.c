typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00263FC0;

void func_08CB90(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00263FC0.a = 0;
        D_00263FC0.d = 1.0f;
        D_00263FC0.c = 0;
        D_00263FC0.b = 0;
    }
}

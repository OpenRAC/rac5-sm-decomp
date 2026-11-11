typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00269560;

void func_089860(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00269560.a = 0;
        D_00269560.d = 1.0f;
        D_00269560.c = 0;
        D_00269560.b = 0;
    }
}

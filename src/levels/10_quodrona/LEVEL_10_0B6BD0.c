typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00331990;

void func_0B6BD0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00331990.a = 0;
        D_00331990.d = 1.0f;
        D_00331990.c = 0;
        D_00331990.b = 0;
    }
}

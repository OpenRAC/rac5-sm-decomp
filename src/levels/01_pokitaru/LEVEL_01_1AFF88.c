typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00398150;

void func_1AFF88(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00398150.a = 0;
        D_00398150.d = 1.0f;
        D_00398150.c = 0;
        D_00398150.b = 0;
    }
}

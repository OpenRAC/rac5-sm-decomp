typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003EAD90;

void func_1FE780(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003EAD90.a = 0;
        D_003EAD90.d = 1.0f;
        D_003EAD90.c = 0;
        D_003EAD90.b = 0;
    }
}

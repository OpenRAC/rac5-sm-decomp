typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003EAA88;

void func_1EFC38(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003EAA88.a = 0;
        D_003EAA88.d = 1.0f;
        D_003EAA88.c = 0;
        D_003EAA88.b = 0;
    }
}

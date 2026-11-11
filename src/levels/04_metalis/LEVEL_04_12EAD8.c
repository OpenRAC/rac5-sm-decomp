typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0036C050;

void func_12EAD8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0036C050.a = 0;
        D_0036C050.d = 1.0f;
        D_0036C050.c = 0;
        D_0036C050.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027E2E8;

void func_0A4CB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027E2E8.a = 0;
        D_0027E2E8.d = 1.0f;
        D_0027E2E8.c = 0;
        D_0027E2E8.b = 0;
    }
}

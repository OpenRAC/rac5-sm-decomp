typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003433A8;

void func_0D04F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003433A8.a = 0;
        D_003433A8.d = 1.0f;
        D_003433A8.c = 0;
        D_003433A8.b = 0;
    }
}

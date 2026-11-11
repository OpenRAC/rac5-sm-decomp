typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003EB478;

void func_210A78(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003EB478.a = 0;
        D_003EB478.d = 1.0f;
        D_003EB478.c = 0;
        D_003EB478.b = 0;
    }
}

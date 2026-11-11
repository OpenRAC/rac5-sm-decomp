typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0035D638;

void func_12EE78(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0035D638.a = 0;
        D_0035D638.d = 1.0f;
        D_0035D638.c = 0;
        D_0035D638.b = 0;
    }
}

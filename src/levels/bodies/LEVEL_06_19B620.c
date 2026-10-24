typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00383D00;

void func_19B620(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00383D00.a = 0;
        D_00383D00.d = 1.0f;
        D_00383D00.c = 0;
        D_00383D00.b = 0;
    }
}

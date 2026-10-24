typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B788;

void func_0D91A8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B788.a = 0;
        D_0027B788.d = 1.0f;
        D_0027B788.c = 0;
        D_0027B788.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B1C8;

void func_0C4EF0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B1C8.a = 0;
        D_0027B1C8.d = 1.0f;
        D_0027B1C8.c = 0;
        D_0027B1C8.b = 0;
    }
}

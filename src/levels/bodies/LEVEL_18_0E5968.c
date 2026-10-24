typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027F878;

void func_0E5968(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027F878.a = 0;
        D_0027F878.d = 1.0f;
        D_0027F878.c = 0;
        D_0027F878.b = 0;
    }
}

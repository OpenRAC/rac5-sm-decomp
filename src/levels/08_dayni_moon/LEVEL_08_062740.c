typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002881E8;

void func_062740(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002881E8.a = 0;
        D_002881E8.d = 1.0f;
        D_002881E8.c = 0;
        D_002881E8.b = 0;
    }
}

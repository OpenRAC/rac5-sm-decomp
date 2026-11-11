typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0021CC10;

void func_025D58(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0021CC10.a = 0;
        D_0021CC10.d = 1.0f;
        D_0021CC10.c = 0;
        D_0021CC10.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00380B58;

void func_154980(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00380B58.a = 0;
        D_00380B58.d = 1.0f;
        D_00380B58.c = 0;
        D_00380B58.b = 0;
    }
}

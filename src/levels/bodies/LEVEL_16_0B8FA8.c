typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00279EF8;

void func_0B8FA8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00279EF8.a = 0;
        D_00279EF8.d = 1.0f;
        D_00279EF8.c = 0;
        D_00279EF8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00205048;

void func_05E580(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00205048.a = 0;
        D_00205048.d = 1.0f;
        D_00205048.c = 0;
        D_00205048.b = 0;
    }
}

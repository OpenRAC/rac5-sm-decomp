typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F9010;

void func_0D1B90(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F9010.a = 0;
        D_002F9010.d = 1.0f;
        D_002F9010.c = 0;
        D_002F9010.b = 0;
    }
}

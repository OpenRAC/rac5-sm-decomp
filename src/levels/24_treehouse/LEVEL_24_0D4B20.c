typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F94D8;

void func_0D4B20(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F94D8.a = 0;
        D_002F94D8.d = 1.0f;
        D_002F94D8.c = 0;
        D_002F94D8.b = 0;
    }
}

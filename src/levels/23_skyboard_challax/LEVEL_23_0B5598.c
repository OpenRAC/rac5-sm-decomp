typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002F9F00;

void func_0B5598(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002F9F00.a = 0;
        D_002F9F00.d = 1.0f;
        D_002F9F00.c = 0;
        D_002F9F00.b = 0;
    }
}

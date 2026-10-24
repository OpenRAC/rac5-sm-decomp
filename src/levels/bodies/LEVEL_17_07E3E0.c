typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001E2F50;

void func_07E3E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001E2F50.a = 0;
        D_001E2F50.d = 1.0f;
        D_001E2F50.c = 0;
        D_001E2F50.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001E0098;

void func_027B10(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001E0098.a = 0;
        D_001E0098.d = 1.0f;
        D_001E0098.c = 0;
        D_001E0098.b = 0;
    }
}

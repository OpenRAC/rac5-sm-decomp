typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002536F0;

void func_05D860(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002536F0.a = 0;
        D_002536F0.d = 1.0f;
        D_002536F0.c = 0;
        D_002536F0.b = 0;
    }
}

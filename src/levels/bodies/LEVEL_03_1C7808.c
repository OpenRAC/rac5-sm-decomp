typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B3460;

void func_1C7808(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B3460.a = 0;
        D_003B3460.d = 1.0f;
        D_003B3460.c = 0;
        D_003B3460.b = 0;
    }
}

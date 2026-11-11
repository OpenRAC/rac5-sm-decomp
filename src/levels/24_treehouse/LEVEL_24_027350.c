typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001FCE88;

void func_027350(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001FCE88.a = 0;
        D_001FCE88.d = 1.0f;
        D_001FCE88.c = 0;
        D_001FCE88.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00366330;

void func_18DA70(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00366330.a = 0;
        D_00366330.d = 1.0f;
        D_00366330.c = 0;
        D_00366330.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0027B768;

void func_0D84E0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0027B768.a = 0;
        D_0027B768.d = 1.0f;
        D_0027B768.c = 0;
        D_0027B768.b = 0;
    }
}

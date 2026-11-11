typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B2058;

void func_1A8A98(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B2058.a = 0;
        D_003B2058.d = 1.0f;
        D_003B2058.c = 0;
        D_003B2058.b = 0;
    }
}

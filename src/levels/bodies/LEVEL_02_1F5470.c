typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B0C80;

void func_1F5470(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B0C80.a = 0;
        D_003B0C80.d = 1.0f;
        D_003B0C80.c = 0;
        D_003B0C80.b = 0;
    }
}

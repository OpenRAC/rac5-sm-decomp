typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003B0E48;

void func_17BFB8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003B0E48.a = 0;
        D_003B0E48.d = 1.0f;
        D_003B0E48.c = 0;
        D_003B0E48.b = 0;
    }
}

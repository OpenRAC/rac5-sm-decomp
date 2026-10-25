typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003318B8;

void func_0B5FD8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003318B8.a = 0;
        D_003318B8.d = 1.0f;
        D_003318B8.c = 0;
        D_003318B8.b = 0;
    }
}

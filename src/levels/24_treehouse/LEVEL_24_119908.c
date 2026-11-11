typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0031D720;

void func_119908(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0031D720.a = 0;
        D_0031D720.d = 1.0f;
        D_0031D720.c = 0;
        D_0031D720.b = 0;
    }
}

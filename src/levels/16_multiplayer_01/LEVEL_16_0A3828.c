typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002763C0;

void func_0A3828(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002763C0.a = 0;
        D_002763C0.d = 1.0f;
        D_002763C0.c = 0;
        D_002763C0.b = 0;
    }
}

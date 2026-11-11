typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002767E8;

void func_0A50F0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002767E8.a = 0;
        D_002767E8.d = 1.0f;
        D_002767E8.c = 0;
        D_002767E8.b = 0;
    }
}

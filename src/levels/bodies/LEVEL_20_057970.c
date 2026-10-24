typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00143D28;

void func_057970(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00143D28.a = 0;
        D_00143D28.d = 1.0f;
        D_00143D28.c = 0;
        D_00143D28.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EC650;

void func_065180(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EC650.a = 0;
        D_001EC650.d = 1.0f;
        D_001EC650.c = 0;
        D_001EC650.b = 0;
    }
}

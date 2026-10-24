typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001362E8;

void func_01D738(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001362E8.a = 0;
        D_001362E8.d = 1.0f;
        D_001362E8.c = 0;
        D_001362E8.b = 0;
    }
}

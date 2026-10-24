typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EBB10;

void func_053348(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EBB10.a = 0;
        D_001EBB10.d = 1.0f;
        D_001EBB10.c = 0;
        D_001EBB10.b = 0;
    }
}

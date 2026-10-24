typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00246CD8;

void func_017BF8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00246CD8.a = 0;
        D_00246CD8.d = 1.0f;
        D_00246CD8.c = 0;
        D_00246CD8.b = 0;
    }
}

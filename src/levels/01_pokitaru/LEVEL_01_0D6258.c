typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0032CFD8;

void func_0D6258(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0032CFD8.a = 0;
        D_0032CFD8.d = 1.0f;
        D_0032CFD8.c = 0;
        D_0032CFD8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002DF5C0;

void func_112768(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002DF5C0.a = 0;
        D_002DF5C0.d = 1.0f;
        D_002DF5C0.c = 0;
        D_002DF5C0.b = 0;
    }
}

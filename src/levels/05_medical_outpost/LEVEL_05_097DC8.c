typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00286DA8;

void func_097DC8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00286DA8.a = 0;
        D_00286DA8.d = 1.0f;
        D_00286DA8.c = 0;
        D_00286DA8.b = 0;
    }
}

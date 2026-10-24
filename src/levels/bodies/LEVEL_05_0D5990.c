typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00318F70;

void func_0D5990(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00318F70.a = 0;
        D_00318F70.d = 1.0f;
        D_00318F70.c = 0;
        D_00318F70.b = 0;
    }
}

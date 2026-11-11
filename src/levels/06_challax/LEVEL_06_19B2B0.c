typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_00383CF0;

void func_19B2B0(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_00383CF0.a = 0;
        D_00383CF0.d = 1.0f;
        D_00383CF0.c = 0;
        D_00383CF0.b = 0;
    }
}

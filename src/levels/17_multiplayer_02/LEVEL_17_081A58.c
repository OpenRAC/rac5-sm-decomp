typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EF7C8;

void func_081A58(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EF7C8.a = 0;
        D_001EF7C8.d = 1.0f;
        D_001EF7C8.c = 0;
        D_001EF7C8.b = 0;
    }
}

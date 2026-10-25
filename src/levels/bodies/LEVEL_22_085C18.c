typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001EDE40;

void func_085C18(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001EDE40.a = 0;
        D_001EDE40.d = 1.0f;
        D_001EDE40.c = 0;
        D_001EDE40.b = 0;
    }
}

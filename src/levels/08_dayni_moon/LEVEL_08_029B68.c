typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_002801F8;

void func_029B68(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_002801F8.a = 0;
        D_002801F8.d = 1.0f;
        D_002801F8.c = 0;
        D_002801F8.b = 0;
    }
}

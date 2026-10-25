typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001FCCF0;

void func_018308(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001FCCF0.a = 0;
        D_001FCCF0.d = 1.0f;
        D_001FCCF0.c = 0;
        D_001FCCF0.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003E4B00;

void func_178A00(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003E4B00.a = 0;
        D_003E4B00.d = 1.0f;
        D_003E4B00.c = 0;
        D_003E4B00.b = 0;
    }
}

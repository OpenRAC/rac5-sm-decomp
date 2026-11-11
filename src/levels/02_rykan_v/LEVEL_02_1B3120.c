typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AEEE8;

void func_1B3120(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AEEE8.a = 0;
        D_003AEEE8.d = 1.0f;
        D_003AEEE8.c = 0;
        D_003AEEE8.b = 0;
    }
}

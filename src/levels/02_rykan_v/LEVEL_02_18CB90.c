typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003ADED8;

void func_18CB90(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003ADED8.a = 0;
        D_003ADED8.d = 1.0f;
        D_003ADED8.c = 0;
        D_003ADED8.b = 0;
    }
}

typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_0033DDD8;

void func_0B76C8(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_0033DDD8.a = 0;
        D_0033DDD8.d = 1.0f;
        D_0033DDD8.c = 0;
        D_0033DDD8.b = 0;
    }
}

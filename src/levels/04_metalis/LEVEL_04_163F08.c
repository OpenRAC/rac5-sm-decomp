typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_003AE088;

void func_163F08(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_003AE088.a = 0;
        D_003AE088.d = 1.0f;
        D_003AE088.c = 0;
        D_003AE088.b = 0;
    }
}

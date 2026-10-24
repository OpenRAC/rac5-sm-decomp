typedef struct { int a; int b; int c; float d; } Rec;

extern Rec D_001DDC60;

void func_06AB40(void *p, int q)
{
    if (q == 0xFFFF && p != 0) {
        D_001DDC60.a = 0;
        D_001DDC60.d = 1.0f;
        D_001DDC60.c = 0;
        D_001DDC60.b = 0;
    }
}

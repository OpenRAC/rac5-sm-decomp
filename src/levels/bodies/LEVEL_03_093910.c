typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002B2C30;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002B2C30.a = 0;
            D_002B2C30.d = 1.0f;
            D_002B2C30.c = 0;
            D_002B2C30.b = 0;
        }
    }
}

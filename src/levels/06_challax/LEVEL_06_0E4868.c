typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0031A488;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0031A488.a = 0;
            D_0031A488.d = 1.0f;
            D_0031A488.c = 0;
            D_0031A488.b = 0;
        }
    }
}

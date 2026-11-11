typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0032BE98;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0032BE98.a = 0;
            D_0032BE98.d = 1.0f;
            D_0032BE98.c = 0;
            D_0032BE98.b = 0;
        }
    }
}

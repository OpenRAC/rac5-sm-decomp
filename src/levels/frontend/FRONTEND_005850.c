typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0010C040;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0010C040.a = 0;
            D_0010C040.d = 1.0f;
            D_0010C040.c = 0;
            D_0010C040.b = 0;
        }
    }
}

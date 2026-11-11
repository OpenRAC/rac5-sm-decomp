typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0012D708;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0012D708.a = 0;
            D_0012D708.d = 1.0f;
            D_0012D708.c = 0;
            D_0012D708.b = 0;
        }
    }
}

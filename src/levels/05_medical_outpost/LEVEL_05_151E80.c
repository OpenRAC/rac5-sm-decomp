typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0037F788;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0037F788.a = 0;
            D_0037F788.d = 1.0f;
            D_0037F788.c = 0;
            D_0037F788.b = 0;
        }
    }
}

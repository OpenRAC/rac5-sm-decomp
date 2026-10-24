typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0021DD08;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0021DD08.a = 0;
            D_0021DD08.d = 1.0f;
            D_0021DD08.c = 0;
            D_0021DD08.b = 0;
        }
    }
}

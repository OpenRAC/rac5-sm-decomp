typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A2018;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A2018.a = 0;
            D_003A2018.d = 1.0f;
            D_003A2018.c = 0;
            D_003A2018.b = 0;
        }
    }
}

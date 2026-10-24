typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A7418;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A7418.a = 0;
            D_003A7418.d = 1.0f;
            D_003A7418.c = 0;
            D_003A7418.b = 0;
        }
    }
}

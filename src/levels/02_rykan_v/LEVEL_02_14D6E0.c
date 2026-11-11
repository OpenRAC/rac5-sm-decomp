typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A8F88;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A8F88.a = 0;
            D_003A8F88.d = 1.0f;
            D_003A8F88.c = 0;
            D_003A8F88.b = 0;
        }
    }
}

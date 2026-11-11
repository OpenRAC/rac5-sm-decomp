typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003A7208;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003A7208.a = 0;
            D_003A7208.d = 1.0f;
            D_003A7208.c = 0;
            D_003A7208.b = 0;
        }
    }
}

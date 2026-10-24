typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_0027BA18;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_0027BA18.a = 0;
            D_0027BA18.d = 1.0f;
            D_0027BA18.c = 0;
            D_0027BA18.b = 0;
        }
    }
}

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002A7250;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002A7250.a = 0;
            D_002A7250.d = 1.0f;
            D_002A7250.c = 0;
            D_002A7250.b = 0;
        }
    }
}

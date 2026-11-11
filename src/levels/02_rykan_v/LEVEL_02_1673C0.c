typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003AB030;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003AB030.a = 0;
            D_003AB030.d = 1.0f;
            D_003AB030.c = 0;
            D_003AB030.b = 0;
        }
    }
}

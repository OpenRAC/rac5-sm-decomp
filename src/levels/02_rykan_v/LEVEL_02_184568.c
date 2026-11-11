typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003ADC08;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_003ADC08.a = 0;
            D_003ADC08.d = 1.0f;
            D_003ADC08.c = 0;
            D_003ADC08.b = 0;
        }
    }
}

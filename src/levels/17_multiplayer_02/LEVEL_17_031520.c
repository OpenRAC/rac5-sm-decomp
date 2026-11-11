typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001D3330;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001D3330.a = 0;
            D_001D3330.d = 1.0f;
            D_001D3330.c = 0;
            D_001D3330.b = 0;
        }
    }
}

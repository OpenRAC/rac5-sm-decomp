typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001A2D58;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001A2D58.a = 0;
            D_001A2D58.d = 1.0f;
            D_001A2D58.c = 0;
            D_001A2D58.b = 0;
        }
    }
}

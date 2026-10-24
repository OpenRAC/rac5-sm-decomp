typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_001E6980;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_001E6980.a = 0;
            D_001E6980.d = 1.0f;
            D_001E6980.c = 0;
            D_001E6980.b = 0;
        }
    }
}

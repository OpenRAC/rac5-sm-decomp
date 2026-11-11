typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002F4980;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002F4980.a = 0;
            D_002F4980.d = 1.0f;
            D_002F4980.c = 0;
            D_002F4980.b = 0;
        }
    }
}

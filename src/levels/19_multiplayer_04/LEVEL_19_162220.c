typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E5910;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002E5910.a = 0;
            D_002E5910.d = 1.0f;
            D_002E5910.c = 0;
            D_002E5910.b = 0;
        }
    }
}

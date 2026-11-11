typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E5748;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002E5748.a = 0;
            D_002E5748.d = 1.0f;
            D_002E5748.c = 0;
            D_002E5748.b = 0;
        }
    }
}

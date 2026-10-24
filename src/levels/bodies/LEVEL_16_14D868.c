typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002E5120;

void f(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_002E5120.a = 0;
            D_002E5120.d = 1.0f;
            D_002E5120.c = 0;
            D_002E5120.b = 0;
        }
    }
}

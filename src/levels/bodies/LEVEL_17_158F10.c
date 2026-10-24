typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002D67B8;

void func_158F10(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D67B8.i0 = 0;
            D_002D67B8.f3 = 1.0f;
            D_002D67B8.i2 = 0;
            D_002D67B8.i1 = 0;
        }
    }
}

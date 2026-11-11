typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002F37D0;

void func_0AB038(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F37D0.i0 = 0;
            D_002F37D0.f3 = 1.0f;
            D_002F37D0.i2 = 0;
            D_002F37D0.i1 = 0;
        }
    }
}

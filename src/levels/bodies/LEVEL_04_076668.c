typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00254610;

void func_076668(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00254610.i0 = 0;
            D_00254610.f3 = 1.0f;
            D_00254610.i2 = 0;
            D_00254610.i1 = 0;
        }
    }
}

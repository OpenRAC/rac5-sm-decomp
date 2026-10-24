typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00379088;

void func_13C788(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00379088.i0 = 0;
            D_00379088.f3 = 1.0f;
            D_00379088.i2 = 0;
            D_00379088.i1 = 0;
        }
    }
}

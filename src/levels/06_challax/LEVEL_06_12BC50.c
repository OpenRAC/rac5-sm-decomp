typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0037E480;

void func_12BC50(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E480.i0 = 0;
            D_0037E480.f3 = 1.0f;
            D_0037E480.i2 = 0;
            D_0037E480.i1 = 0;
        }
    }
}

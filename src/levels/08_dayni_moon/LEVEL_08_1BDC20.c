/* LEVEL_08.REL:0x1BDC20 -- reset of the global record D_003E8560. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003E8560;

void func_08_1BDC20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E8560.f_0C = 1.0f;
            D_003E8560.i_00 = 0;
            D_003E8560.i_08 = 0;
            D_003E8560.i_04 = 0;
        }
    }
}

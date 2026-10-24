/* LEVEL_03.REL:0x1E5D78 -- reset of the global record D_003B3D10. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B3D10;

void func_03_1E5D78(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3D10.f_0C = 1.0f;
            D_003B3D10.i_00 = 0;
            D_003B3D10.i_08 = 0;
            D_003B3D10.i_04 = 0;
        }
    }
}

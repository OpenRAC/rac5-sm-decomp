/* LEVEL_20.REL:0x0C7650 -- reset of the global record D_001A2DC8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001A2DC8;

void func_20_0C7650(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001A2DC8.f_0C = 1.0f;
            D_001A2DC8.i_00 = 0;
            D_001A2DC8.i_08 = 0;
            D_001A2DC8.i_04 = 0;
        }
    }
}

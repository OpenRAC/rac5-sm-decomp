/* LEVEL_16.REL:0x033548 -- reset of the global record D_001E3AF8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001E3AF8;

void func_16_033548(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E3AF8.f_0C = 1.0f;
            D_001E3AF8.i_00 = 0;
            D_001E3AF8.i_08 = 0;
            D_001E3AF8.i_04 = 0;
        }
    }
}

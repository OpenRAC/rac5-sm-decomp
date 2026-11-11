/* LEVEL_16.REL:0x02F920 -- reset of the global record D_001E1F88. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001E1F88;

void func_16_02F920(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E1F88.f_0C = 1.0f;
            D_001E1F88.i_00 = 0;
            D_001E1F88.i_08 = 0;
            D_001E1F88.i_04 = 0;
        }
    }
}

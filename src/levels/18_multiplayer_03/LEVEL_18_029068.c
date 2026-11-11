/* LEVEL_18.REL:0x029068 -- reset of the global record D_001E0990. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001E0990;

void func_18_029068(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E0990.f_0C = 1.0f;
            D_001E0990.i_00 = 0;
            D_001E0990.i_08 = 0;
            D_001E0990.i_04 = 0;
        }
    }
}

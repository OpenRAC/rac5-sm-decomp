/* LEVEL_23.REL:0x027C28 -- reset of the global record D_001FE818. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001FE818;

void func_23_027C28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001FE818.f_0C = 1.0f;
            D_001FE818.i_00 = 0;
            D_001FE818.i_08 = 0;
            D_001FE818.i_04 = 0;
        }
    }
}

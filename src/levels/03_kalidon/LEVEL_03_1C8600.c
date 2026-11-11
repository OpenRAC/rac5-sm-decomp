/* LEVEL_03.REL:0x1C8600 -- reset of the global record D_003B3480. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B3480;

void func_03_1C8600(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3480.f_0C = 1.0f;
            D_003B3480.i_00 = 0;
            D_003B3480.i_08 = 0;
            D_003B3480.i_04 = 0;
        }
    }
}

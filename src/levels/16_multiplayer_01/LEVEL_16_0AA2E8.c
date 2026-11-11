/* LEVEL_16.REL:0x0AA2E8 -- reset of the global record D_00276950. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00276950;

void func_16_0AA2E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276950.f_0C = 1.0f;
            D_00276950.i_00 = 0;
            D_00276950.i_08 = 0;
            D_00276950.i_04 = 0;
        }
    }
}

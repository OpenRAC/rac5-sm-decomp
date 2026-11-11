/* LEVEL_17.REL:0x07A9E8 -- reset of the global record D_001E2F40. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001E2F40;

void func_17_07A9E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E2F40.f_0C = 1.0f;
            D_001E2F40.i_00 = 0;
            D_001E2F40.i_08 = 0;
            D_001E2F40.i_04 = 0;
        }
    }
}

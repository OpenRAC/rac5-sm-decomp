/* LEVEL_16.REL:0x1115B8 -- reset of the global record D_002D5C90. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002D5C90;

void func_16_1115B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D5C90.f_0C = 1.0f;
            D_002D5C90.i_00 = 0;
            D_002D5C90.i_08 = 0;
            D_002D5C90.i_04 = 0;
        }
    }
}

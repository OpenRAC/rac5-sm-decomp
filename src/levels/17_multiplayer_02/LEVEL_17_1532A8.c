/* LEVEL_17.REL:0x1532A8 -- reset of the global record D_002D64E0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002D64E0;

void func_17_1532A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D64E0.f_0C = 1.0f;
            D_002D64E0.i_00 = 0;
            D_002D64E0.i_08 = 0;
            D_002D64E0.i_04 = 0;
        }
    }
}

/* LEVEL_01.REL:0x024250 -- reset of the global record D_0022FC78. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0022FC78;

void func_01_024250(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0022FC78.f_0C = 1.0f;
            D_0022FC78.i_00 = 0;
            D_0022FC78.i_08 = 0;
            D_0022FC78.i_04 = 0;
        }
    }
}

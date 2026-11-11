/* LEVEL_24.REL:0x127008 -- reset of the global record D_0031D890. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0031D890;

void func_24_127008(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D890.f_0C = 1.0f;
            D_0031D890.i_00 = 0;
            D_0031D890.i_08 = 0;
            D_0031D890.i_04 = 0;
        }
    }
}

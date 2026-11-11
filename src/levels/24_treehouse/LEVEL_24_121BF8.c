/* LEVEL_24.REL:0x121BF8 -- reset of the global record D_0031D860. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0031D860;

void func_24_121BF8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D860.f_0C = 1.0f;
            D_0031D860.i_00 = 0;
            D_0031D860.i_08 = 0;
            D_0031D860.i_04 = 0;
        }
    }
}

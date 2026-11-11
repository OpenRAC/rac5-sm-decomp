/* LEVEL_22.REL:0x080070 -- reset of the global record D_00194E00. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00194E00;

void func__080070(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00194E00.f_0C = 1.0f;
            D_00194E00.i_00 = 0;
            D_00194E00.i_08 = 0;
            D_00194E00.i_04 = 0;
        }
    }
}

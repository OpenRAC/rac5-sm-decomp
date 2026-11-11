/* LEVEL_05.REL:0x0FD1E8 -- reset of the global record D_0031D528. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0031D528;

void func_05_0FD1E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D528.f_0C = 1.0f;
            D_0031D528.i_00 = 0;
            D_0031D528.i_08 = 0;
            D_0031D528.i_04 = 0;
        }
    }
}

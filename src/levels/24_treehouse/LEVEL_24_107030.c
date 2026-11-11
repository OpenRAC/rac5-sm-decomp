/* LEVEL_24.REL:0x107030 -- reset of the global record D_002FD670. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002FD670;

void func_24_107030(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FD670.f_0C = 1.0f;
            D_002FD670.i_00 = 0;
            D_002FD670.i_08 = 0;
            D_002FD670.i_04 = 0;
        }
    }
}

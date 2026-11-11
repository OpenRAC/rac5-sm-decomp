/* LEVEL_03.REL:0x08F9F0 -- reset of the global record D_262EC8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_262EC8;

void func_08F9F0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_262EC8.f_0C = 1.0f;
            D_262EC8.i_00 = 0;
            D_262EC8.i_08 = 0;
            D_262EC8.i_04 = 0;
        }
    }
}

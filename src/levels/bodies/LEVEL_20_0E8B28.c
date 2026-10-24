/* LEVEL_20.REL:0x0E8B28 -- reset of the global record D_00202F00. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00202F00;

void func_20_0E8B28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00202F00.f_0C = 1.0f;
            D_00202F00.i_00 = 0;
            D_00202F00.i_08 = 0;
            D_00202F00.i_04 = 0;
        }
    }
}

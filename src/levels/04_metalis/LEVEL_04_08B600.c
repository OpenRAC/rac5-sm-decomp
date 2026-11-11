/* LEVEL_04.REL:0x08B600 -- reset of the global record D_00255B00. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00255B00;

void func_04_08B600(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00255B00.f_0C = 1.0f;
            D_00255B00.i_00 = 0;
            D_00255B00.i_08 = 0;
            D_00255B00.i_04 = 0;
        }
    }
}

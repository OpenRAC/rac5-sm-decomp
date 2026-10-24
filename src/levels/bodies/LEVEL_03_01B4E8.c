/* LEVEL_03.REL:0x01B4E8 -- reset of the global record D_0024AA58. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0024AA58;

void func__01B4E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024AA58.f_0C = 1.0f;
            D_0024AA58.i_00 = 0;
            D_0024AA58.i_08 = 0;
            D_0024AA58.i_04 = 0;
        }
    }
}

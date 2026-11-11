/* LEVEL_23.REL:0x062388 -- reset of the global record D_00206690. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00206690;

void func__062388(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00206690.f_0C = 1.0f;
            D_00206690.i_00 = 0;
            D_00206690.i_08 = 0;
            D_00206690.i_04 = 0;
        }
    }
}

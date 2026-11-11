/* LEVEL_03.REL:0x0B2FC0 -- reset of the global record D_00342898. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00342898;

void func_03_0B2FC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00342898.f_0C = 1.0f;
            D_00342898.i_00 = 0;
            D_00342898.i_08 = 0;
            D_00342898.i_04 = 0;
        }
    }
}

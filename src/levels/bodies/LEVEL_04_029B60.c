/* LEVEL_04.REL:0x029B60 -- reset of the global record D_0024BB98. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0024BB98;

void func_04_029B60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024BB98.f_0C = 1.0f;
            D_0024BB98.i_00 = 0;
            D_0024BB98.i_08 = 0;
            D_0024BB98.i_04 = 0;
        }
    }
}

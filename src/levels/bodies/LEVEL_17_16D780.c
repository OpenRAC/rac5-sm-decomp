/* LEVEL_17.REL:0x16D780 -- reset of the global record D_002D6D88. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002D6D88;

void func__16D780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D6D88.f_0C = 1.0f;
            D_002D6D88.i_00 = 0;
            D_002D6D88.i_08 = 0;
            D_002D6D88.i_04 = 0;
        }
    }
}

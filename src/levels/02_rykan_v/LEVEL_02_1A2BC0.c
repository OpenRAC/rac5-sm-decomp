/* LEVEL_02.REL:0x1A2BC0 -- reset of the global record D_003AEC00. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AEC00;

void func_02_1A2BC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AEC00.f_0C = 1.0f;
            D_003AEC00.i_00 = 0;
            D_003AEC00.i_08 = 0;
            D_003AEC00.i_04 = 0;
        }
    }
}

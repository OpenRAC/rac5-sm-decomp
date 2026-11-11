/* LEVEL_18.REL:0x054480 -- reset of the global record D_001EBB88. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001EBB88;

void func_18_054480(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EBB88.f_0C = 1.0f;
            D_001EBB88.i_00 = 0;
            D_001EBB88.i_08 = 0;
            D_001EBB88.i_04 = 0;
        }
    }
}

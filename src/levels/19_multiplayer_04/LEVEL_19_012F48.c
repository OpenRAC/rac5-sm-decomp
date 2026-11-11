/* LEVEL_19.REL:0x012F48 -- reset of the global record D_001DE568. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001DE568;

void func_19_012F48(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE568.f_0C = 1.0f;
            D_001DE568.i_00 = 0;
            D_001DE568.i_08 = 0;
            D_001DE568.i_04 = 0;
        }
    }
}

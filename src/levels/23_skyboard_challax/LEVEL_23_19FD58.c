/* LEVEL_23.REL:0x19FD58 -- reset of the global record D_003666B8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003666B8;

void func_23_19FD58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003666B8.f_0C = 1.0f;
            D_003666B8.i_00 = 0;
            D_003666B8.i_08 = 0;
            D_003666B8.i_04 = 0;
        }
    }
}

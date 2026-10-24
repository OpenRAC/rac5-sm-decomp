/* LEVEL_08.REL:0x16A2C8 -- reset of the global record D_003E2BD8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003E2BD8;

void func_08_16A2C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E2BD8.f_0C = 1.0f;
            D_003E2BD8.i_00 = 0;
            D_003E2BD8.i_08 = 0;
            D_003E2BD8.i_04 = 0;
        }
    }
}

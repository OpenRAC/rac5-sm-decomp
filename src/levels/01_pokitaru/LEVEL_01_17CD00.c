/* LEVEL_01.REL:0x17CD00 -- reset of the global record D_00395FA0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00395FA0;

void func_01_17CD00(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00395FA0.f_0C = 1.0f;
            D_00395FA0.i_00 = 0;
            D_00395FA0.i_08 = 0;
            D_00395FA0.i_04 = 0;
        }
    }
}

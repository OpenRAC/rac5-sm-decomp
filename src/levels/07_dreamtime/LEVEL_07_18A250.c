/* LEVEL_07.REL:0x18A250 -- reset of the global record D_003AB908. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AB908;

void func_07_18A250(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB908.f_0C = 1.0f;
            D_003AB908.i_00 = 0;
            D_003AB908.i_08 = 0;
            D_003AB908.i_04 = 0;
        }
    }
}

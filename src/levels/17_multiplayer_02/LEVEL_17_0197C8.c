/* LEVEL_17.REL:0x0197C8 -- reset of the global record D_001CFC38. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001CFC38;

void func__0197C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001CFC38.f_0C = 1.0f;
            D_001CFC38.i_00 = 0;
            D_001CFC38.i_08 = 0;
            D_001CFC38.i_04 = 0;
        }
    }
}

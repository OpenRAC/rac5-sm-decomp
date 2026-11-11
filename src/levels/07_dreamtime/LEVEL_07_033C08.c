/* LEVEL_07.REL:0x033C08 -- reset of the global record D_00248940. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00248940;

void func_07_033C08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00248940.f_0C = 1.0f;
            D_00248940.i_00 = 0;
            D_00248940.i_08 = 0;
            D_00248940.i_04 = 0;
        }
    }
}

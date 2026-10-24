/* LEVEL_19.REL:0x0EF348 -- reset of the global record D_0027F738. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0027F738;

void func_19_0EF348(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027F738.f_0C = 1.0f;
            D_0027F738.i_00 = 0;
            D_0027F738.i_08 = 0;
            D_0027F738.i_04 = 0;
        }
    }
}

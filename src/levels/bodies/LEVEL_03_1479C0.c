/* LEVEL_03.REL:0x1479C0 -- resets the playback record D_003AC948: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AC948;

void func_1479C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AC948.f_00 = 0;
            D_003AC948.f_0C = 1.0f;
            D_003AC948.f_08 = 0;
            D_003AC948.f_04 = 0;
        }
    }
}

/* LEVEL_05.REL:0x031AF0 -- resets the playback record D_0021ED70: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0021ED70;

void func_031AF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021ED70.f_00 = 0;
            D_0021ED70.f_0C = 1.0f;
            D_0021ED70.f_08 = 0;
            D_0021ED70.f_04 = 0;
        }
    }
}

/* LEVEL_07.REL:0x0FF6B0 -- resets the playback record D_00346F38: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00346F38;

void func_0FF6B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00346F38.f_00 = 0;
            D_00346F38.f_0C = 1.0f;
            D_00346F38.f_08 = 0;
            D_00346F38.f_04 = 0;
        }
    }
}

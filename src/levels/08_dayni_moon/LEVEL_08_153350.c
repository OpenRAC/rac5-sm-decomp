/* LEVEL_08.REL:0x153350 -- resets the playback record D_003E0B38: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E0B38;

void func_153350(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E0B38.f_00 = 0;
            D_003E0B38.f_0C = 1.0f;
            D_003E0B38.f_08 = 0;
            D_003E0B38.f_04 = 0;
        }
    }
}

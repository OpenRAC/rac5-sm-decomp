/* LEVEL_18.REL:0x0D7038 -- resets the playback record D_0027BB28: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027BB28;

void func_0D7038(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027BB28.f_00 = 0;
            D_0027BB28.f_0C = 1.0f;
            D_0027BB28.f_08 = 0;
            D_0027BB28.f_04 = 0;
        }
    }
}

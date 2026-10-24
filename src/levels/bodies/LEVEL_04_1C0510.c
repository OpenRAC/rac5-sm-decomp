/* LEVEL_04.REL:0x1C0510 -- resets the playback record D_003B3670: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B3670;

void func_1C0510(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B3670.f_00 = 0;
            D_003B3670.f_0C = 1.0f;
            D_003B3670.f_08 = 0;
            D_003B3670.f_04 = 0;
        }
    }
}

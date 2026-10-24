/* LEVEL_16.REL:0x0B4C70 -- resets the playback record D_00279520: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00279520;

void func_0B4C70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00279520.f_00 = 0;
            D_00279520.f_0C = 1.0f;
            D_00279520.f_08 = 0;
            D_00279520.f_04 = 0;
        }
    }
}

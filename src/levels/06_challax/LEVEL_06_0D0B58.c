/* LEVEL_06.REL:0x0D0B58 -- resets the playback record D_00319D58: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00319D58;

void func_0D0B58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00319D58.f_00 = 0;
            D_00319D58.f_0C = 1.0f;
            D_00319D58.f_08 = 0;
            D_00319D58.f_04 = 0;
        }
    }
}

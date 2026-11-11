/* LEVEL_17.REL:0x121270 -- resets the playback record D_002D2BC8: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002D2BC8;

void func_121270(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D2BC8.f_00 = 0;
            D_002D2BC8.f_0C = 1.0f;
            D_002D2BC8.f_08 = 0;
            D_002D2BC8.f_04 = 0;
        }
    }
}

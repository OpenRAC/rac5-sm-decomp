/* LEVEL_23.REL:0x0B9068 -- resets the playback record D_002FA360: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002FA360;

void func_0B9068(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FA360.f_00 = 0;
            D_002FA360.f_0C = 1.0f;
            D_002FA360.f_08 = 0;
            D_002FA360.f_04 = 0;
        }
    }
}

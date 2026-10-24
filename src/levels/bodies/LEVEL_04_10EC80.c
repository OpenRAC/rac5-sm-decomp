/* LEVEL_04.REL:0x10EC80 -- resets the playback record D_0034BE88: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0034BE88;

void func_10EC80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034BE88.f_00 = 0;
            D_0034BE88.f_0C = 1.0f;
            D_0034BE88.f_08 = 0;
            D_0034BE88.f_04 = 0;
        }
    }
}

/* LEVEL_03.REL:0x167E48 -- resets the playback record D_003B0C30: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B0C30;

void func_167E48(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B0C30.f_00 = 0;
            D_003B0C30.f_0C = 1.0f;
            D_003B0C30.f_08 = 0;
            D_003B0C30.f_04 = 0;
        }
    }
}

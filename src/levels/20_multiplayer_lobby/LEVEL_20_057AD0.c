/* LEVEL_20.REL:0x057AD0 -- resets the playback record D_00143D38: three int words
   cleared and the float slot set to one, when the caller asks for it. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00143D38;

void func_057AD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00143D38.f_00 = 0;
            D_00143D38.f_0C = 1.0f;
            D_00143D38.f_08 = 0;
            D_00143D38.f_04 = 0;
        }
    }
}

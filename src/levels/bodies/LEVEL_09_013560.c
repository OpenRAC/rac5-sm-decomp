/* LEVEL_09:0x013560 -- resets a small global record when the caller asks for
   a full refresh: three zero words and one float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00216E68;

void func_013560(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00216E68.f_00 = 0;
            D_00216E68.f_0C = 1.0f;
            D_00216E68.f_08 = 0;
            D_00216E68.f_04 = 0;
        }
    }
}

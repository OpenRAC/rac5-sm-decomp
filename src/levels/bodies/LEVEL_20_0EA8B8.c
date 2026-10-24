/* LEVEL_20.REL:0x0EA8B8 -- resets the global record D_00203180: three zero words and a
   float set to one, when the caller's handle is valid. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00203180;

void func_0EA8B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00203180.f_00 = 0;
            D_00203180.f_04 = 0;
            D_00203180.f_08 = 0;
            D_00203180.f_0C = 1.0f;
        }
    }
}

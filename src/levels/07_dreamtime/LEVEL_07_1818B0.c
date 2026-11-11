/* LEVEL_07.REL:0x1818B0 -- resets the global record D_003AB770: three zero words and a
   float set to one, when the caller's handle is valid. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AB770;

void func_1818B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB770.f_00 = 0;
            D_003AB770.f_04 = 0;
            D_003AB770.f_08 = 0;
            D_003AB770.f_0C = 1.0f;
        }
    }
}

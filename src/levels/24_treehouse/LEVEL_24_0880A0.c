/* LEVEL_24.REL:0880A0 -- resets the global record D_20B100: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_20B100;

void func_0880A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_20B100.f_00 = 0;
            D_20B100.f_04 = 0;
            D_20B100.f_08 = 0;
            D_20B100.f_0C = 1.0f;
        }
    }
}

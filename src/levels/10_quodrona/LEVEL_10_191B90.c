/* LEVEL_10.REL:191B90 -- resets the global record D_3A0188: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3A0188;

void func_191B90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3A0188.f_00 = 0;
            D_3A0188.f_04 = 0;
            D_3A0188.f_08 = 0;
            D_3A0188.f_0C = 1.0f;
        }
    }
}

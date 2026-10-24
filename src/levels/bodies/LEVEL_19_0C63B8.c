/* LEVEL_19.REL:0C63B8 -- resets the global record D_27B2B0: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_27B2B0;

void func_0C63B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_27B2B0.f_00 = 0;
            D_27B2B0.f_04 = 0;
            D_27B2B0.f_08 = 0;
            D_27B2B0.f_0C = 1.0f;
        }
    }
}

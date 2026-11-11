/* LEVEL_06.REL:127B90 -- resets the global record D_33E750: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_33E750;

void func_127B90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_33E750.f_00 = 0;
            D_33E750.f_04 = 0;
            D_33E750.f_08 = 0;
            D_33E750.f_0C = 1.0f;
        }
    }
}

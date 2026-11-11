/* LEVEL_18.REL:120900 -- resets the global record D_002E1C48: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E1C48;

void func_120900(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E1C48.f_00 = 0;
            D_002E1C48.f_0C = 1.0f;
            D_002E1C48.f_08 = 0;
            D_002E1C48.f_04 = 0;
        }
    }
}

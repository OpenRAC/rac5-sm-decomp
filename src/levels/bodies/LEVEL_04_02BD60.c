/* LEVEL_04.REL:02BD60 -- resets the global record D_24C110: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_24C110;

void func_02BD60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_24C110.f_00 = 0;
            D_24C110.f_04 = 0;
            D_24C110.f_08 = 0;
            D_24C110.f_0C = 1.0f;
        }
    }
}

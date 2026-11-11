/* LEVEL_09:0x0D2390 -- initialises the global record D_00314520 (three words
   and a float) and writes 4 or 5 into D_00314530, depending on the value
   read in D_002043F0. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00314520;
extern int D_00314530;
extern int D_002043F0;

void func_0D2390(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            int flag = D_002043F0 ^ 0x18;
            int value = (flag == 0) ? 4 : 5;
            D_00314520.f_00 = 0;
            D_00314520.f_04 = 0;
            D_00314520.f_08 = 0;
            D_00314520.f_0C = 1.0f;
            D_00314530 = value;
        }
    }
}

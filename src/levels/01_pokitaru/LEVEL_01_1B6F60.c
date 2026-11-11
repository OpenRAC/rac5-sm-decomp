/* LEVEL_01:0x1B6F60 -- resets the global record D_398410: three zero
   words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_398410;

void func_1B6F60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_398410.f_00 = 0;
            D_398410.f_0C = 1.0f;
            D_398410.f_08 = 0;
            D_398410.f_04 = 0;
        }
    }
}

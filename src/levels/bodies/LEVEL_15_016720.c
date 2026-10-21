/* LEVEL_15:0x016720 -- resets the global record D_00177CD0: three
   zero words and a float set to one, but only when the caller asks for the
   0xFFFF channel and gives a live object. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00177CD0;

void func_016720(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00177CD0.f_00 = 0;
            D_00177CD0.f_04 = 0;
            D_00177CD0.f_08 = 0;
            D_00177CD0.f_0C = 1.0f;
        }
    }
}

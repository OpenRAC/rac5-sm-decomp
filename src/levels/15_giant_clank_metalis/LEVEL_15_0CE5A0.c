/* LEVEL_15:0x0CE5A0 -- resets the global record D_00248CB8: three
   zero words and a float set to one, but only when the caller asks for the
   0xFFFF channel and gives a live object. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00248CB8;

void func_0CE5A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00248CB8.f_00 = 0;
            D_00248CB8.f_04 = 0;
            D_00248CB8.f_08 = 0;
            D_00248CB8.f_0C = 1.0f;
        }
    }
}

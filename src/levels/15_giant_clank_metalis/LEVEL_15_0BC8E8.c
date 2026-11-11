/* LEVEL_15:0x0BC8E8 -- when the marker is 0xFFFF and the pointer is
   not null, resets the global record D_244E98 to zero with a unit float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_244E98;

void func_0BC8E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_244E98.f_00 = 0;
            D_244E98.f_04 = 0;
            D_244E98.f_08 = 0;
            D_244E98.f_0C = 1.0f;
        }
    }
}

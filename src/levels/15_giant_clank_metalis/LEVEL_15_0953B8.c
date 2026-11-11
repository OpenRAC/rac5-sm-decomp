/* LEVEL_15:0x0953B8 -- when the marker is 0xFFFF and the pointer is
   not null, resets the global record D_23FCF8 to zero with a unit float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_23FCF8;

void func_0953B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_23FCF8.f_00 = 0;
            D_23FCF8.f_04 = 0;
            D_23FCF8.f_08 = 0;
            D_23FCF8.f_0C = 1.0f;
        }
    }
}

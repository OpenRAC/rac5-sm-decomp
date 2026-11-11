/* LEVEL_15:0x12B7E8 -- when the marker is 0xFFFF and the pointer is
   not null, resets the global record D_2F2FD0 to zero with a unit float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2F2FD0;

void func_12B7E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2F2FD0.f_00 = 0;
            D_2F2FD0.f_04 = 0;
            D_2F2FD0.f_08 = 0;
            D_2F2FD0.f_0C = 1.0f;
        }
    }
}

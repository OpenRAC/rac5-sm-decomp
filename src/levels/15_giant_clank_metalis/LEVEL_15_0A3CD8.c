/* LEVEL_15:0x0A3CD8 -- when the marker is 0xFFFF and the pointer is
   not null, resets the global record D_2408B0 to zero with a unit float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2408B0;

void func_0A3CD8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2408B0.f_00 = 0;
            D_2408B0.f_04 = 0;
            D_2408B0.f_08 = 0;
            D_2408B0.f_0C = 1.0f;
        }
    }
}

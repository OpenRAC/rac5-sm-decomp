/* LEVEL_23:0x0C5030 -- resets the global record D_2FD540 and copies the
   global float D_1D6094 into the global float D_2FD550. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002FD540;
extern float D_002FD550;
extern float D_001D6094;

void func_0C5030(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FD540.f_0C = 1.0f;
            D_002FD540.f_00 = 0;
            D_002FD550 = D_001D6094;
            D_002FD540.f_08 = 0;
            D_002FD540.f_04 = 0;
        }
    }
}

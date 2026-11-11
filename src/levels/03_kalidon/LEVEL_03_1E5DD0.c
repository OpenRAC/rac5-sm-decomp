/* LEVEL_03.REL:0x1E5DD0 -- accumulates a delta into the global tilt and
   latches the flag once it passes fifteen units. */
typedef struct {
    float f_00;
    unsigned char flag_04;
} Tilt;

extern Tilt D_3B3D30;

void func_1E5DD0(float a0)
{
    float v;

    if (D_3B3D30.flag_04 != 0)
        return;
    v = D_3B3D30.f_00 + a0;
    D_3B3D30.f_00 = v;
    if (v > 15.0f)
        D_3B3D30.flag_04 = 1;
}

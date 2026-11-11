/* LEVEL_04.REL:0x1EADB8 -- accumulates a delta into the global tilt and
   latches the flag once it passes fifteen units. */
typedef struct {
    float f_00;
    unsigned char flag_04;
} Tilt;

extern Tilt D_3B4208;

void func_1EADB8(float a0)
{
    float v;

    if (D_3B4208.flag_04 != 0)
        return;
    v = D_3B4208.f_00 + a0;
    D_3B4208.f_00 = v;
    if (v > 15.0f)
        D_3B4208.flag_04 = 1;
}

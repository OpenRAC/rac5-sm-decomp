/* LEVEL_02:0x1E8A68 -- the global record D_003B0B48 holds a float at +0x00 and
   a "done" byte at +0x04; while the byte is clear the float is accumulated
   and, once it passes 15.0f, the byte is set. */
typedef struct {
    float f_00;
    unsigned char f_04;
} Rec;

extern Rec D_003B0B48;

void func_1E8A68(float a0)
{
    if (D_003B0B48.f_04 == 0) {
        float v = D_003B0B48.f_00 + a0;
        D_003B0B48.f_00 = v;
        if (v > 15.0f) {
            D_003B0B48.f_04 = 1;
        }
    }
}

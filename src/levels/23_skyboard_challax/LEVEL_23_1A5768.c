/* LEVEL_23:0x1A5768 -- the global record D_003669F0 holds a float at +0x00 and
   a "done" byte at +0x04; while the byte is clear the float is accumulated
   and, once it passes 15.0f, the byte is set. */
typedef struct {
    float f_00;
    unsigned char f_04;
} Rec;

extern Rec D_003669F0;

void func_1A5768(float a0)
{
    if (D_003669F0.f_04 == 0) {
        float v = D_003669F0.f_00 + a0;
        D_003669F0.f_00 = v;
        if (v > 15.0f) {
            D_003669F0.f_04 = 1;
        }
    }
}

/* LEVEL_01:0x016F70 -- clamps a ratio and packs it into the top byte of a word. */

extern int func_1EB278(float f);

void func_016F70(unsigned int *o, float x, float y)
{
    int r;
    float ratio;

    if (0.0f < y) {
        if (1.0f < x) {
            x = 1.0f;
        }
        if (x < y) {
            ratio = x / y;
        } else {
            x = 1.0f - x;
            if (x < y) {
                ratio = x / y;
            } else {
                ratio = 1.0f;
            }
        }
        r = func_1EB278(ratio * 255.0f);
        *o = (*o & 0x00FFFFFFu) | (r << 24);
    } else {
        *o = *o | 0xFF000000u;
    }
}

/* FRONTEND:0x0055B0 -- packs the signs of two floats into a direction flag word. */
int func_0055B0(float x, float z)
{
    int r = 0;
    if (x != 0.0f) {
        r = 0x20;
        if (!(x > 0.0f)) {
            r = 0x80;
        }
    }
    if (z != 0.0f) {
        if (z > 0.0f) {
            r |= 0x40;
        } else {
            r |= 0x10;
        }
    }
    return r;
}

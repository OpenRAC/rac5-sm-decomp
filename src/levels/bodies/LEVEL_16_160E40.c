/* LEVEL_16:0x160E40 -- reports whether a record is within 20 units of the owner's anchor. */

extern int func_0383A8(char *a);
extern int func_114718(char *a);

int func_160E40(char *a0, char *a1)
{
    char *s0 = a1;
    char *o;
    float *p;
    float *q;
    float dx;
    float dy;
    float dz;
    int r = 0;

    if (*(int *)(s0 + 0xF4) != 0) {
        if (func_0383A8(s0) == 0) {
            if (func_114718(s0) == 0) {
                o = *(char **)(a0 + 0x58);
                p = (float *)(s0 + 0x30);
                q = (float *)(o + 0x30);
                dx = *(float *)(s0 + 0x30) - *(float *)(o + 0x30);
                dy = p[1] - q[1];
                dz = p[2] - q[2];
                if (dx * dx + dy * dy + dz * dz < 400.0f) {
                    r = 1;
                }
            }
        }
    }
    return r;
}

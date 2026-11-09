/* LEVEL_17:0x162F20 -- placement copy of LEVEL_16_16C780.c: returns 1 when two positioned objects are within a squared distance of 9, else 0. */
extern int func_037BC8(char *o);

int func_162F20(char *o1, char *o2)
{
    float *a;
    float *b;
    float dx;
    float dy;
    float dz;
    int r;

    r = 0;
    if (*(int *)(o2 + 0xF4) != 0) {
        if (func_037BC8(o2)) {
            a = (float *)(o1 + 0x30);
            b = (float *)(o2 + 0x30);
            dx = b[0] - a[0];
            dy = b[1] - a[1];
            dz = b[2] - a[2];
            if (dx * dx + dy * dy + dz * dz < 9.0f) {
                r = 1;
            }
        }
    }
    return r;
}

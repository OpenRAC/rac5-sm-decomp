/* LEVEL_02:0x081C90 -- placement copy of LEVEL_01_07B3A8.c: scans a global table of four-float rows, failing when one row's weighted sum is below a bound. */
struct Vec16 {
    float x;
    float y;
    float z;
    float w;
};

extern char *D_0020B100;

int func_081C90(struct Vec16 *a0)
{
    struct Vec16 *e;
    struct Vec16 *end;
    float lim;
    float dot;

    lim = -a0->w;
    e = (struct Vec16 *)(D_0020B100 + 0x60);
    end = (struct Vec16 *)(D_0020B100 + 0xB0);
    do {
        dot = a0->x * e->x + a0->y * e->y + a0->z * e->z + e->w;
        if (!(dot < lim)) {
            e++;
        } else {
            return 0;
        }
    } while (e != end);
    return 1;
}

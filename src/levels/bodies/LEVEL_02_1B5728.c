/* LEVEL_02:0x1B5728 -- clears a pending slot, then tests the distance on the XZ plane against a fixed radius. */

extern int func_01AC80(float *p);
extern int func_08B060(void *a, float *p);

int func_1B5728(char *o)
{
    char *s;
    char *t;
    float p[3];
    float dx;
    float dz;

    s = *(char **)(o + 0x54);
    t = *(char **)(s + 0x3C);
    if (t != 0) {
        if (*(unsigned char *)(t + 0x45) != 2) {
            return 0;
        }
        *(void **)(s + 0x3C) = 0;
    }
    func_01AC80(p);
    if (func_08B060(*(void **)(s + 0x2C), p)) {
        dx = *(float *)(o + 0x30) - p[0];
        dz = *(float *)(o + 0x38) - p[2];
        if (dx * dx + dz * dz <= 625.0f) {
            return 1;
        }
    }
    return 0;
}

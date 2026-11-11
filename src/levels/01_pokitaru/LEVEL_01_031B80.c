/* LEVEL_01:0x031B80 -- validates two optional checks, then tests a vector against a limit. */

extern int func_084708(void *a0);
extern int func_1C4940(void *a0, void *a1);
extern int func_014058(void *a0, float f, int a1, int a2);

int func_031B80(unsigned char *o, float *v)
{
    float vec[4];
    int r;

    if (*(void **)(o + 0x10) != 0) {
        if (func_084708(*(void **)(o + 0x10)) == 0) {
            return 3;
        }
    }
    if (*(void **)(o + 0x18) != 0) {
        r = func_1C4940(*(void **)(o + 0x18), v);
        if (r != 0) {
            return 2;
        }
    }
    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    if (o[0x29] == 0) {
        r = func_014058(vec, 0.75f, 0, 1);
        if (r == 0) {
            return 1;
        }
    }
    return 0;
}

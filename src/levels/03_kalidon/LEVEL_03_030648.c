/* LEVEL_03:0x030648 -- placement copy of LEVEL_05_02E5C8.c: placement copy of LEVEL_01_0309E0.c: checks the optional links, then accepts unless the vector test fails. */

extern int func_084588(void *a0, void *a1);
extern int func_1D68A8(void *a0, void *a1);
extern int func_014078(void *a0, float *a1, int a2, float f);

int func_030648(unsigned char *o, float *v, int check, float f)
{
    float vec[4];
    int r;

    if (*(void **)(o + 0x10) != 0) {
        if (func_084588(*(void **)(o + 0x10), v) == 0) {
            return 0;
        }
    }
    if (*(void **)(o + 0x18) != 0) {
        r = func_1D68A8(*(void **)(o + 0x18), v);
        if (r != 0) {
            return 0;
        }
    }
    r = 0;
    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    if (o[0x29] != 0 || check == 0 || func_014078(vec, 0, 1, f) != 0) {
        r = 1;
    }
    return r;
}

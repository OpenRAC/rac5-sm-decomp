/* LEVEL_04:0x031600 -- placement copy of LEVEL_01_031B80.c: validates two optional checks, then tests a vector against a limit. */

extern int func_087C38(void *a0);
extern int func_1D3E00(void *a0, void *a1);
extern int func_013E70(void *a0, float f, int a1, int a2);

int func_031600(unsigned char *o, float *v)
{
    float vec[4];
    int r;

    if (*(void **)(o + 0x10) != 0) {
        if (func_087C38(*(void **)(o + 0x10)) == 0) {
            return 3;
        }
    }
    if (*(void **)(o + 0x18) != 0) {
        r = func_1D3E00(*(void **)(o + 0x18), v);
        if (r != 0) {
            return 2;
        }
    }
    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    if (o[0x29] == 0) {
        r = func_013E70(vec, 0.75f, 0, 1);
        if (r == 0) {
            return 1;
        }
    }
    return 0;
}

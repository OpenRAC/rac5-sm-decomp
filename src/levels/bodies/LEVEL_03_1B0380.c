/* LEVEL_03:0x1B0380 -- placement copy of LEVEL_01_19D278.c: returns 1 when a helper accepts the second object and the squared distance between the two objects' positions is below nine, otherwise 0. */
extern int func_03A5C0(char *a0);

int func_1B0380(char *a0, char *a1)
{
    float *pa;
    float *pb;
    float dx;
    float dy;
    float dz;
    int r;

    r = 0;
    if (func_03A5C0(a1) != 0) {
        pa = (float *)(a0 + 0x30);
        pb = (float *)(a1 + 0x30);
        dx = pb[0] - pa[0];
        dy = pb[1] - pa[1];
        dz = pb[2] - pa[2];
        if (dx * dx + dy * dy + dz * dz < 9.0f) {
            r = 1;
        }
    }
    return r;
}

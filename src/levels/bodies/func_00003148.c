/* LEVEL_04:0x3148 -- add a 3-float vector into the current record's field at +0x1A4. */
extern void *D_002083D4;

void func_00003148(float *v) {
    float *p = (float *)((char *)D_002083D4 + 0x1A4);
    p[0] += v[0];
    p[1] += v[1];
    p[2] += v[2];
}

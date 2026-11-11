/* LEVEL_05:0x3340 -- add a 3-float vector into the current record's field at +0x1A4. */
extern void *D_001DE5D4;

void func_00003340(float *v) {
    float *p = (float *)((char *)D_001DE5D4 + 0x1A4);
    p[0] += v[0];
    p[1] += v[1];
    p[2] += v[2];
}

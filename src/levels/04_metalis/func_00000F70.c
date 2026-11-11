/* LEVEL_04:0xF70 -- add a 3-float vector into the current record's field at +0x30. */
extern void *D_002083C8;

void func_00000F70(float *v) {
    float *p = (float *)((char *)D_002083C8 + 0x30);
    p[0] += v[0];
    p[1] += v[1];
    p[2] += v[2];
}

/* LEVEL_19:0x0F3CF0 -- compares the three floats of the argument with the
   three floats of the global vector and builds a bit mask. */
extern float *D_1B5A38[];

int func_0F3CF0(void *a0)
{
    float *t;
    int v0;

    t = *(float **)D_1B5A38;
    v0 = 0;
    if (*(float *)a0 < t[13]) {
        v0 = 1;
    }
    if (*(float *)((char *)a0 + 0x04) < t[14]) {
        v0 = v0 | 2;
    }
    if (*(float *)((char *)a0 + 0x08) < t[15]) {
        v0 = v0 | 4;
    }
    if (t[16] < *(float *)a0) {
        v0 = v0 | 8;
    }
    if (t[17] < *(float *)((char *)a0 + 0x04)) {
        v0 = v0 | 0x10;
    }
    if (t[18] < *(float *)((char *)a0 + 0x08)) {
        v0 = v0 | 0x20;
    }
    return v0;
}

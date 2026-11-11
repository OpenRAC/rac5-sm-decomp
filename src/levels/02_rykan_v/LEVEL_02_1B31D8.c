/* LEVEL_02:0x1B31D8 -- while the global mode is one of four values and func_08B060 accepts the record's first word, adds the object's velocity scaled by the record's float to the shared accumulator. */
extern unsigned char D_0024C650[];
extern int func_08B060(void *a, unsigned char *b);

void func_1B31D8(unsigned char *o)
{
    unsigned char *g = D_0024C650;
    void **rec;
    float *pa;
    float *pv;
    float scale;
    int ok;
    int mode;

    rec = *(void ***)(o + 0x54);
    ok = 0;
    mode = *(short *)(g + 0x100);
    if (mode == 4 || mode == 0x1D || mode == 0x36 || mode == 0x40)
        ok = 1;
    if ((unsigned char)ok && func_08B060(rec[0], g + 0x30) != 0) {
        scale = ((float *)rec)[1];
        pa = (float *)(g + 0xAA4);
        pv = (float *)(o + 0x20);
        *(float *)(g + 0xAA4) = *(float *)(g + 0xAA4) + pv[0] * scale;
        pa[1] = pa[1] + pv[1] * scale;
        pa[2] = pa[2] + pv[2] * scale;
    }
}

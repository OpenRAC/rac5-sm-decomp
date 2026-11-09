/* LEVEL_08:0x1D33A8 -- placement copy of LEVEL_01_1A0CF0.c: copies a vector from a sub-object, adjusts its Y by a mode-selected offset, then forwards two calls. */

extern void func_137108(void *a0, void *a1, void *a2);
extern void func_1D2280(void *a0, void *a1, float *a2);

void func_1D33A8(char *o)
{
    char *s;
    char *st;
    char *a2;
    float v[3];
    float f;
    unsigned int mode;
    float *src;

    s = *(char **)(o + 0x54);
    st = *(char **)(o + 0x58);
    mode = (unsigned char)o[0x45];
    src = (float *)(*(char **)(s + 0x10) + 0x30);
    v[0] = src[0];
    v[1] = src[1];
    v[2] = src[2];
    a2 = 0;
    switch (mode) {
    case 1:
        f = *(float *)(s + 0xA4);
        a2 = s + 0x98;
        v[1] = v[1] + f;
        break;
    case 2:
        f = *(float *)(s + 0xB4);
        a2 = s + 0xA8;
        v[1] = v[1] + f;
        break;
    }
    func_137108(st + 0xA8, *(char **)(s + 0x10), a2);
    func_1D2280(st + 0x78, st + 0xA8, v);
}

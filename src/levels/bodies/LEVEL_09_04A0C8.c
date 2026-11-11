/* LEVEL_09:0x04A0C8 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_0021C8C0[];
extern void func_03B4B8(char *o);
extern void func_038520(char *o, int a);
extern void func_038610(char *o, float f);
extern void func_0483E8(char *a, int b);
extern void func_002C50(int a);

void func_04A0C8(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03B4B8(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_038520(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_038610(o, 4.0f);
    func_0483E8(D_0021C8C0, q);
    func_002C50(0);
}

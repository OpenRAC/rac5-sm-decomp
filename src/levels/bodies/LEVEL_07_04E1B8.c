/* LEVEL_07:0x04E1B8 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_0024AA40[];
extern void func_03F5A8(char *o);
extern void func_03C610(char *o, int a);
extern void func_03C700(char *o, float f);
extern void func_04C4D8(char *a, int b);
extern void func_002C50(int a);

void func_04E1B8(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03F5A8(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_03C610(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_03C700(o, 4.0f);
    func_04C4D8(D_0024AA40, q);
    func_002C50(0);
}

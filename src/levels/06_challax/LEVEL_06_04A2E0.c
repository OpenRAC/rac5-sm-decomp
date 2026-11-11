/* LEVEL_06:0x04A2E0 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_00221EC0[];
extern void func_03B700(char *o);
extern void func_038768(char *o, int a);
extern void func_038858(char *o, float f);
extern void func_048600(char *a, int b);
extern void func_002C50(int a);

void func_04A2E0(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03B700(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_038768(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_038858(o, 4.0f);
    func_048600(D_00221EC0, q);
    func_002C50(0);
}

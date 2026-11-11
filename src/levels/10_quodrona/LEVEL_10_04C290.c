/* LEVEL_10:0x04C290 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_0023E540[];
extern void func_03D6E0(char *o);
extern void func_03A748(char *o, int a);
extern void func_03A838(char *o, float f);
extern void func_04A5B0(char *a, int b);
extern void func_002A00(int a);

void func_04C290(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03D6E0(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_03A748(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_03A838(o, 4.0f);
    func_04A5B0(D_0023E540, q);
    func_002A00(0);
}

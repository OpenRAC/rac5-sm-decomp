/* LEVEL_03:0x04BE48 -- resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_0024FFC0[];
extern void func_03D298(char *o);
extern void func_03A300(char *o, int a);
extern void func_03A3F0(char *o, float f);
extern void func_04A168(char *a, int b);
extern void func_002C78(int a);

void func_04BE48(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_03D298(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_03A300(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_03A3F0(o, 4.0f);
    func_04A168(D_0024FFC0, q);
    func_002C78(0);
}

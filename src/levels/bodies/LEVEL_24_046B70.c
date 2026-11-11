/* LEVEL_24:0x046B70 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_00201040[];
extern void func_037FC0(char *o);
extern void func_0350E8(char *o, int a);
extern void func_0351D8(char *o, float f);
extern void func_044E90(char *a, int b);
extern void func_002A58(int a);

void func_046B70(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_037FC0(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_0350E8(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_0351D8(o, 4.0f);
    func_044E90(D_00201040, q);
    func_002A58(0);
}

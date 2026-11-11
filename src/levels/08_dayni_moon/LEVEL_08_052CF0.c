/* LEVEL_08:0x052CF0 -- placement copy of LEVEL_03_04BE48.c: resets a state record to mode 0x4D, stores three floats, then calls two helpers. */
extern char D_002843D0[];
extern void func_0440E0(char *o);
extern void func_041148(char *o, int a);
extern void func_041238(char *o, float f);
extern void func_051010(char *a, int b);
extern void func_002C70(int a);

void func_052CF0(char *o, float *p, int q)
{
    float *v;

    if (*(short *)(o + 0x100) != 0x4D) {
        *(short *)(o + 0x102) = 0x4D;
        func_0440E0(o);
        *(short *)(o + 0x100) = 0x4D;
    }
    func_041148(o, 0);
    *(float *)(o + 0xD88) = p[0];
    v = (float *)(o + 0xD88);
    v[1] = p[1];
    v[2] = p[2];
    func_041238(o, 4.0f);
    func_051010(D_002843D0, q);
    func_002C70(0);
}

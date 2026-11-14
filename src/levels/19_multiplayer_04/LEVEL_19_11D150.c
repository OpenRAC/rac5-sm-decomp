/* LEVEL_19:0x11D150 -- placement copy of LEVEL_16_11C7E0.c: fills slot idx of four parallel tables (two floats, a flag word and a value byte) after the slot's state query. */
extern int D_002E15A0[];
extern int D_002E15A8[];
extern int D_001B96A8[];
extern unsigned char D_001B96C0[];
extern int func_11D130(int index);

void func_11D150(int idx, int value, unsigned char flag, float a, float b)
{
    func_11D130(idx);
    *(float *)&D_002E15A0[idx] = b;
    *(float *)&D_002E15A8[idx] = a;
    D_001B96A8[idx] = flag;
    D_001B96C0[idx] = value;
}

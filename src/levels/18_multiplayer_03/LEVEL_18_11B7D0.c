/* LEVEL_18:0x11B7D0 -- placement copy of LEVEL_16_11C7E0.c: fills slot idx of four parallel tables (two floats, a flag word and a value byte) after the slot's state query. */
extern int D_002E17A0[];
extern int D_002E17A8[];
extern int D_001B99B0[];
extern unsigned char D_001B99C8[];
extern int func_11B7B0(int index);

void func_11B7D0(int idx, int value, unsigned char flag, float a, float b)
{
    func_11B7B0(idx);
    *(float *)&D_002E17A0[idx] = b;
    *(float *)&D_002E17A8[idx] = a;
    D_001B99B0[idx] = flag;
    D_001B99C8[idx] = value;
}

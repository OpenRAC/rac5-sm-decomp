/* LEVEL_20:0x0EEB88 -- placement copy of LEVEL_16_11C7E0.c: fills slot idx of four parallel tables (two floats, a flag word and a value byte) after the slot's state query. */
extern int D_00204978[];
extern int D_00204980[];
extern int D_0011ABD0[];
extern unsigned char D_0011ABE8[];
extern int func_0EEB68(int index);

void func_0EEB88(int idx, int value, unsigned char flag, float a, float b)
{
    func_0EEB68(idx);
    *(float *)&D_00204978[idx] = b;
    *(float *)&D_00204980[idx] = a;
    D_0011ABD0[idx] = flag;
    D_0011ABE8[idx] = value;
}

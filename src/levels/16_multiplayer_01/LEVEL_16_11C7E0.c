/* LEVEL_16:0x11C7E0 -- fills slot idx of four parallel tables (two floats, a flag word and a value byte) after the slot's state query. */
extern int D_002E1420[];
extern int D_002E1428[];
extern int D_001B8530[];
extern unsigned char D_001B8548[];
extern int func_11C7C0(int index);

void func_11C7E0(int idx, int value, unsigned char flag, float a, float b)
{
    func_11C7C0(idx);
    *(float *)&D_002E1420[idx] = b;
    *(float *)&D_002E1428[idx] = a;
    D_001B8530[idx] = flag;
    D_001B8548[idx] = value;
}

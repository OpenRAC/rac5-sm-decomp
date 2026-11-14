/* LEVEL_17:0x11C158 -- placement copy of LEVEL_16_11C7E0.c: fills slot idx of four parallel tables (two floats, a flag word and a value byte) after the slot's state query. */
extern int D_002D2720[];
extern int D_002D2728[];
extern int D_001ABB28[];
extern unsigned char D_001ABB40[];
extern int func_11C138(int index);

void func_11C158(int idx, int value, unsigned char flag, float a, float b)
{
    func_11C138(idx);
    *(float *)&D_002D2720[idx] = b;
    *(float *)&D_002D2728[idx] = a;
    D_001ABB28[idx] = flag;
    D_001ABB40[idx] = value;
}

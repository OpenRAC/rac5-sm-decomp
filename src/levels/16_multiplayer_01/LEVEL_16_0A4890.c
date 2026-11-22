/* LEVEL_16:0x0A4890 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0A4870(void);
extern int func_09CDF8(int, void *, float);
extern int D_001AA730[];
extern char D_002764F0[];
void func_0A4890(int index, int unused, unsigned char value, int arg)
{
    func_0A4870();
    D_001AA730[index] = value;
    func_09CDF8(arg, D_002764F0 + index * 16, 0.0f);
}

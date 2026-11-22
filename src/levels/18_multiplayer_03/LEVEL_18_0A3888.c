/* LEVEL_18:0x0A3888 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0A3868(void);
extern int func_09BE08(int, void *, float);
extern int D_001ABBB0[];
extern char D_00276870[];
void func_0A3888(int index, int unused, unsigned char value, int arg)
{
    func_0A3868();
    D_001ABBB0[index] = value;
    func_09BE08(arg, D_00276870 + index * 16, 0.0f);
}

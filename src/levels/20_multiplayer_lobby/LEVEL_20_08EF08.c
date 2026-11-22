/* LEVEL_20:0x08EF08 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_08EEE8(void);
extern int func_0874F0(int, void *, float);
extern int D_0010CE10[];
extern char D_00199D30[];
void func_08EF08(int index, int unused, unsigned char value, int arg)
{
    func_08EEE8();
    D_0010CE10[index] = value;
    func_0874F0(arg, D_00199D30 + index * 16, 0.0f);
}

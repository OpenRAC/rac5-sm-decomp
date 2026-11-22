/* LEVEL_17:0x0A3D70 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0A3D50(void);
extern int func_09C2F0(int, void *, float);
extern int D_0019DD30[];
extern char D_002677F0[];
void func_0A3D70(int index, int unused, unsigned char value, int arg)
{
    func_0A3D50();
    D_0019DD30[index] = value;
    func_09C2F0(arg, D_002677F0 + index * 16, 0.0f);
}

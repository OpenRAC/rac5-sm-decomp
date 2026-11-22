/* LEVEL_19:0x0A4108 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0A40E8(void);
extern int func_09C688(int, void *, float);
extern int D_001AB8B0[];
extern char D_00276670[];
void func_0A4108(int index, int unused, unsigned char value, int arg)
{
    func_0A40E8();
    D_001AB8B0[index] = value;
    func_09C688(arg, D_00276670 + index * 16, 0.0f);
}

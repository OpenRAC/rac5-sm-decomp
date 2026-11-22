/* LEVEL_08:0x0C0768 -- placement copy of LEVEL_04_0BB080.c: runs the pre-step, stores the byte value for the slot and starts the effect for the slot's record. */
extern int func_0C0748(void);
extern int func_0B9040(int, void *, float);
extern int D_00245570[];
extern char D_00377830[];
void func_0C0768(int index, int unused, unsigned char value, int arg)
{
    func_0C0748();
    D_00245570[index] = value;
    func_0B9040(arg, D_00377830 + index * 16, 0.0f);
}

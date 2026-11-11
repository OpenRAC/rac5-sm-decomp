/* LEVEL_09.REL:0x015F98: complete reviewed body; pure C. */
extern int func_023A90(int wanted, unsigned int amount, int context);
extern void func_022C48(char *record, int wanted);
extern void func_01A3D0(int wanted);

int func_015F98(char *record, int wanted, unsigned int amount)
{
    int result = func_023A90(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_022C48(record, wanted);
        func_01A3D0(wanted);
    }
    return result;
}

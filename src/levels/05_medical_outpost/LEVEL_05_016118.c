/* LEVEL_05.REL:0x016118: complete reviewed body; pure C. */
extern int func_023730(int wanted, unsigned int amount, int context);
extern void func_022A50(char *record, int wanted);
extern void func_01A578(int wanted);

int func_016118(char *record, int wanted, unsigned int amount)
{
    int result = func_023730(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_022A50(record, wanted);
        func_01A578(wanted);
    }
    return result;
}

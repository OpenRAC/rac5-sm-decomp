/* LEVEL_09:0x015F48 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_07D168(char *object, int mode);
extern unsigned int func_1D50E0(float f);
extern int func_015F98(char *record, int wanted, unsigned int amount);
int func_015F48(char *record, int wanted, char *object, int mode)
{
    return func_015F98(record, wanted, func_1D50E0(func_07D168(object, mode)));
}

/* LEVEL_04:0x015C80 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_083B48(char *object, int mode);
extern unsigned int func_204438(float f);
extern int func_015CD0(char *record, int wanted, unsigned int amount);
int func_015C80(char *record, int wanted, char *object, int mode)
{
    return func_015CD0(record, wanted, func_204438(func_083B48(object, mode)));
}

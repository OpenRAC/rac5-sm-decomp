/* LEVEL_17:0x014F80 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_073920(char *object, int mode);
extern unsigned int func_18A360(float f);
extern int func_014FD0(char *record, int wanted, unsigned int amount);
int func_014F80(char *record, int wanted, char *object, int mode)
{
    return func_014FD0(record, wanted, func_18A360(func_073920(object, mode)));
}

/* LEVEL_20:0x0135B8 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0621E0(char *object, int mode);
extern unsigned int func_0F9448(float f);
extern int func_013608(char *record, int wanted, unsigned int amount);
int func_0135B8(char *record, int wanted, char *object, int mode)
{
    return func_013608(record, wanted, func_0F9448(func_0621E0(object, mode)));
}

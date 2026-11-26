/* LEVEL_03:0x015D70 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0804C8(char *object, int mode);
extern unsigned int func_203908(float f);
extern int func_015DC0(char *record, int wanted, unsigned int amount);
int func_015D70(char *record, int wanted, char *object, int mode)
{
    return func_015DC0(record, wanted, func_203908(func_0804C8(object, mode)));
}

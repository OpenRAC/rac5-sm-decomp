/* LEVEL_16:0x015458 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0731F0(char *object, int mode);
extern unsigned int func_196D18(float f);
extern int func_0154A8(char *record, int wanted, unsigned int amount);
int func_015458(char *record, int wanted, char *object, int mode)
{
    return func_0154A8(record, wanted, func_196D18(func_0731F0(object, mode)));
}

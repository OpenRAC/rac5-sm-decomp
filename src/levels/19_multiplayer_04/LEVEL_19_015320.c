/* LEVEL_19:0x015320 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_073338(char *object, int mode);
extern unsigned int func_197EE0(float f);
extern int func_015370(char *record, int wanted, unsigned int amount);
int func_015320(char *record, int wanted, char *object, int mode)
{
    return func_015370(record, wanted, func_197EE0(func_073338(object, mode)));
}

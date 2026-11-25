/* LEVEL_07:0x016580 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_082850(char *object, int mode);
extern unsigned int func_1FF5F0(float f);
extern int func_0165D0(char *record, int wanted, unsigned int amount);
int func_016580(char *record, int wanted, char *object, int mode)
{
    return func_0165D0(record, wanted, func_1FF5F0(func_082850(object, mode)));
}

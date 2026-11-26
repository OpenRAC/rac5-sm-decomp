/* LEVEL_23:0x014E98 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_077AE8(char *object, int mode);
extern unsigned int func_1BE6B8(float f);
extern int func_014EE8(char *record, int wanted, unsigned int amount);
int func_014E98(char *record, int wanted, char *object, int mode)
{
    return func_014EE8(record, wanted, func_1BE6B8(func_077AE8(object, mode)));
}

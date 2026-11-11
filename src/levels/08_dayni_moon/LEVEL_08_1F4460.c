/* LEVEL_08:0x1F4460 -- releases the two records held by the object's data block and passes the linked item to the activation helper with 1. */
extern void func_088AA8(char *record);
extern void func_0845F8(char *item, int flag);

void func_1F4460(char *obj)
{
    char *s0;
    char *s1;

    s0 = *(char **)(obj + 0x58);
    s1 = *(char **)(obj + 0x54);
    func_088AA8(*(char **)(s0 + 0x2C));
    func_088AA8(*(char **)(s0 + 0x30));
    func_0845F8(*(char **)(s1 + 4), 1);
}

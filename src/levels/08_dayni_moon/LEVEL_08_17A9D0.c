/* LEVEL_08:0x17A9D0 -- placement copy of LEVEL_04_16F628.c: runs three setup helpers on the object and returns 3. */
extern void func_170FF0(char *o, int a, int b);
extern void func_205670(char *o);
extern void func_0845F8(char *o, int a);

int func_17A9D0(char *o)
{
    func_170FF0(o, 3, 0);
    func_205670(o);
    func_0845F8(o, 1);
    return 3;
}

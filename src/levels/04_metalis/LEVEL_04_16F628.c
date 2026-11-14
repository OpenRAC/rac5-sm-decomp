/* LEVEL_04:0x16F628 -- runs three setup helpers on the object and returns 3. */
extern void func_1691D8(char *o, int a, int b);
extern void func_1DE4B0(char *o);
extern void func_07FAE8(char *o, int a);

int func_16F628(char *o)
{
    func_1691D8(o, 3, 0);
    func_1DE4B0(o);
    func_07FAE8(o, 1);
    return 3;
}

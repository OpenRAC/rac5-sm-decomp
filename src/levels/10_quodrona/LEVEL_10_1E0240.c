/* LEVEL_10:0x1E0240 -- scales the second helper result by the third and hands the product to the sink for the object. */
extern int func_1541D8(void);
extern int func_1E0170(int a, int b, float scale, int c);
extern int func_027F58(void);
extern void func_153908(int arg, unsigned int size);

void func_1E0240(int object, int a, int c, float scale)
{
    int amount = func_1E0170(a, func_1541D8(), scale, c);

    func_153908(object, (unsigned int)amount * (unsigned int)func_027F58());
}

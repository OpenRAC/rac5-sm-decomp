/* LEVEL_23:0x0E29E8 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0F20D8(void *p);
extern void func_0F20E0(void *p);
extern void func_0F0D10(void *p);

void func_0E29E8(char *obj, int all)
{
    func_0F20D8(obj + 0xB0);
    func_0F20E0(obj + 0x7C);
    if (all)
        func_0F0D10(obj + 0xCC);
}

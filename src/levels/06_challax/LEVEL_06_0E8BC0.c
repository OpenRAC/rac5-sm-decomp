/* LEVEL_06:0x0E8BC0 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0F82B0(void *p);
extern void func_0F82B8(void *p);
extern void func_0F6EE8(void *p);

void func_0E8BC0(char *obj, int all)
{
    func_0F82B0(obj + 0xB0);
    func_0F82B8(obj + 0x7C);
    if (all)
        func_0F6EE8(obj + 0xCC);
}

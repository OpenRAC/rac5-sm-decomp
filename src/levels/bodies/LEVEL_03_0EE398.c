/* LEVEL_03:0x0EE398 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FDA88(void *p);
extern void func_0FDA90(void *p);
extern void func_0FC6C0(void *p);

void func_0EE398(char *obj, int all)
{
    func_0FDA88(obj + 0xB0);
    func_0FDA90(obj + 0x7C);
    if (all)
        func_0FC6C0(obj + 0xCC);
}

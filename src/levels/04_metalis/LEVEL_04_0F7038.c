/* LEVEL_04:0x0F7038 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_107908(void *p);
extern void func_107910(void *p);
extern void func_105360(void *p);

void func_0F7038(char *obj, int all)
{
    func_107908(obj + 0xB0);
    func_107910(obj + 0x7C);
    if (all)
        func_105360(obj + 0xCC);
}

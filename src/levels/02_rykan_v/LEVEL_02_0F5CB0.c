/* LEVEL_02:0x0F5CB0 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_1053A0(void *p);
extern void func_1053A8(void *p);
extern void func_103FD8(void *p);

void func_0F5CB0(char *obj, int all)
{
    func_1053A0(obj + 0xB0);
    func_1053A8(obj + 0x7C);
    if (all)
        func_103FD8(obj + 0xCC);
}

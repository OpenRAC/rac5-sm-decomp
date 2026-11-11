/* LEVEL_24:0x0E7710 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0F6E00(void *p);
extern void func_0F6E08(void *p);
extern void func_0F5A38(void *p);

void func_0E7710(char *obj, int all)
{
    func_0F6E00(obj + 0xB0);
    func_0F6E08(obj + 0x7C);
    if (all)
        func_0F5A38(obj + 0xCC);
}

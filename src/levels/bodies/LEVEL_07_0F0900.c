/* LEVEL_07:0x0F0900 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FFFF0(void *p);
extern void func_0FFFF8(void *p);
extern void func_0FEC28(void *p);

void func_0F0900(char *obj, int all)
{
    func_0FFFF0(obj + 0xB0);
    func_0FFFF8(obj + 0x7C);
    if (all)
        func_0FEC28(obj + 0xCC);
}

/* LEVEL_09:0x0EB9E0 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FB0D0(void *p);
extern void func_0FB0D8(void *p);
extern void func_0F9D08(void *p);

void func_0EB9E0(char *obj, int all)
{
    func_0FB0D0(obj + 0xB0);
    func_0FB0D8(obj + 0x7C);
    if (all)
        func_0F9D08(obj + 0xCC);
}

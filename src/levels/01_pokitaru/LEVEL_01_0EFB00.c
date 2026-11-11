/* LEVEL_01:0x0EFB00 -- resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FF1F0(void *p);
extern void func_0FF1F8(void *p);
extern void func_0FDE28(void *p);

void func_0EFB00(char *obj, int all)
{
    func_0FF1F0(obj + 0xB0);
    func_0FF1F8(obj + 0x7C);
    if (all)
        func_0FDE28(obj + 0xCC);
}

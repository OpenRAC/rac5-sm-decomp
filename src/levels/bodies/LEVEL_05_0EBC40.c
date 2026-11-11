/* LEVEL_05:0x0EBC40 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FB330(void *p);
extern void func_0FB338(void *p);
extern void func_0F9F68(void *p);

void func_0EBC40(char *obj, int all)
{
    func_0FB330(obj + 0xB0);
    func_0FB338(obj + 0x7C);
    if (all)
        func_0F9F68(obj + 0xCC);
}

/* LEVEL_10:0x0EF440 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_0FEB30(void *p);
extern void func_0FEB38(void *p);
extern void func_0FD768(void *p);

void func_0EF440(char *obj, int all)
{
    func_0FEB30(obj + 0xB0);
    func_0FEB38(obj + 0x7C);
    if (all)
        func_0FD768(obj + 0xCC);
}

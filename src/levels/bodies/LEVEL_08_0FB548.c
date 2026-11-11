/* LEVEL_08:0x0FB548 -- placement copy of LEVEL_01_0EFB00.c: resets the object's two sub records and, when asked,
   the third one at 0xCC. */
extern void func_10BE18(void *p);
extern void func_10BE20(void *p);
extern void func_109870(void *p);

void func_0FB548(char *obj, int all)
{
    func_10BE18(obj + 0xB0);
    func_10BE20(obj + 0x7C);
    if (all)
        func_109870(obj + 0xCC);
}

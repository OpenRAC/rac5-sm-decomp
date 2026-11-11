/* LEVEL_04:0x1766B8 -- when the object is not yet in state 3, stores the converted count-times-scale value in its record, starts the effect, and switches the object to state 3. */
extern int *func_177868(const char *p);
extern unsigned int func_204438(float input);
extern void func_1DCDF0(char *object, int a, int b, char *table, float scale);
extern void func_176918(char *object, int state);
extern char D_002442D0[];

int func_1766B8(char *object, int a1, int a2, int a3, int a4, int a5, float scale)
{
    char *rec;

    if (*(unsigned char *)(object + 0x46) == 3)
        return 0;
    rec = *(char **)(object + 0x58);
    *(unsigned int *)(rec + 0xF4) = func_204438((float)*(unsigned int *)((char *)func_177868(object) + 0x10) * scale);
    func_1DCDF0(object, a5, a3, D_002442D0, scale);
    func_176918(object, 3);
    return 0;
}

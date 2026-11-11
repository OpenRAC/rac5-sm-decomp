/* LEVEL_10:0x1733D0 -- stores two data addresses into a sub-record reached through the object, then calls two helpers. */
extern char D_00173310[];
extern char D_001733C8[];
extern int func_07D018(char *p);
extern void func_173428(char *p);

void func_1733D0(char *a0)
{
    char *a2;

    a2 = *(char **)a0;
    *(char **)(*(char **)(a2 + 0x48) + 0xDC) = D_00173310;
    *(char **)(*(char **)(a2 + 0x48) + 0xE0) = D_001733C8;
    func_07D018(a2);
    func_173428(a0);
}

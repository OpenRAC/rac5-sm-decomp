/* LEVEL_18:0x034E58 -- placement copy of LEVEL_01_03A470.c: releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_06F008(char *a0);
extern void func_06F0E8(char *record);
extern void func_034AA0(char *string, void *object, int flag);
void func_034E58(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        ((void (*)(char *a0, int a1))func_06F008)(*slot, 1);
        func_06F0E8(*slot);
        *slot = 0;
        func_034AA0((char *)o, (void *)i, 1);
    }
}

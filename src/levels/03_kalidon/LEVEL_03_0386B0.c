/* LEVEL_03:0x0386B0 -- placement copy of LEVEL_01_03A470.c: releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_07C468(char *a0, int a1);
extern void func_07C5C8(char *record);
extern void func_0380A0(char *string, void *object, int flag);
void func_0386B0(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        func_07C468(*slot, 1);
        func_07C5C8(*slot);
        *slot = 0;
        func_0380A0((char *)o, (void *)i, 1);
    }
}

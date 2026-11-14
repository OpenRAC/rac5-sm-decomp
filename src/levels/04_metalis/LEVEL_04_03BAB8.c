/* LEVEL_04:0x03BAB8 -- placement copy of LEVEL_01_03A470.c: releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_07FAE8(char *a0, int a1);
extern void func_07FC48(char *record);
extern void func_03B4A8(char *string, void *object, int flag);
void func_03BAB8(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        func_07FAE8(*slot, 1);
        func_07FC48(*slot);
        *slot = 0;
        func_03B4A8((char *)o, (void *)i, 1);
    }
}

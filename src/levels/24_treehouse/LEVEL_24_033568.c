/* LEVEL_24:0x033568 -- placement copy of LEVEL_01_03A470.c: releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_076D68(char *a0, int a1);
extern void func_076EC8(char *record);
extern void func_032F58(char *string, void *object, int flag);
void func_033568(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        func_076D68(*slot, 1);
        func_076EC8(*slot);
        *slot = 0;
        func_032F58((char *)o, (void *)i, 1);
    }
}

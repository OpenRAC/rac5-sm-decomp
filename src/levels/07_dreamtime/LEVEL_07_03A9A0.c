/* LEVEL_07:0x03A9A0 -- placement copy of LEVEL_01_03A470.c: releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_07E7F0(char *a0, int a1);
extern void func_07E950(char *record);
extern void func_03A390(char *string, void *object, int flag);
void func_03A9A0(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        func_07E7F0(*slot, 1);
        func_07E950(*slot);
        *slot = 0;
        func_03A390((char *)o, (void *)i, 1);
    }
}

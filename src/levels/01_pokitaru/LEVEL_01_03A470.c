/* LEVEL_01:0x03A470 -- releases the object's table entry at the index (stops and frees it, clears the slot) and refreshes the slot display. */
typedef struct Obj { char pad00[0x5B8]; char *tab[1]; } Obj;
extern void func_07C670(char *a0, int a1);
extern void func_07C7D0(char *record);
extern void func_039E60(char *string, void *object, int flag);
void func_03A470(Obj *o, int i)
{
    char **slot;
    char **tab;
    int off;
    off = i * 4;
    tab = o->tab;
    slot = (char **)((char *)tab + off);
    if (*slot != 0) {
        func_07C670(*slot, 1);
        func_07C7D0(*slot);
        *slot = 0;
        func_039E60((char *)o, (void *)i, 1);
    }
}

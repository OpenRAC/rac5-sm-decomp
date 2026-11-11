/* LEVEL_19:0x1634D0 -- placement copy of LEVEL_16_164128.c: runs the slot setup helper for both slots and then the follow-up helper. */
struct Obj1642C8;
extern char D_00163880[];
extern void func_08A508(char *table, struct Obj1642C8 *o, int a, unsigned int i);
extern void func_163670(struct Obj1642C8 *o);

void func_1634D0(struct Obj1642C8 *o)
{
    unsigned int i = 0;

    do {
        func_08A508(D_00163880, o, 0, i);
        i++;
    } while (i < 2);
    func_163670(o);
}

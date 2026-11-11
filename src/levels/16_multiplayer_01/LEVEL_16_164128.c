/* LEVEL_16:0x164128 -- runs the slot setup helper for both slots and then the follow-up helper. */
struct Obj1642C8;
extern char D_001644D8[];
extern void func_08A058(char *table, struct Obj1642C8 *o, int a, unsigned int i);
extern void func_1642C8(struct Obj1642C8 *o);

void func_164128(struct Obj1642C8 *o)
{
    unsigned int i = 0;

    do {
        func_08A058(D_001644D8, o, 0, i);
        i++;
    } while (i < 2);
    func_1642C8(o);
}

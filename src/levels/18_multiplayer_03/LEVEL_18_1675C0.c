/* LEVEL_18:0x1675C0 -- placement copy of LEVEL_16_164128.c: runs the slot setup helper for both slots and then the follow-up helper. */
struct Obj1642C8;
extern char D_00167970[];
extern void func_0899A0(char *table, struct Obj1642C8 *o, int a, unsigned int i);
extern void func_167760(struct Obj1642C8 *o);

void func_1675C0(struct Obj1642C8 *o)
{
    unsigned int i = 0;

    do {
        func_0899A0(D_00167970, o, 0, i);
        i++;
    } while (i < 2);
    func_167760(o);
}

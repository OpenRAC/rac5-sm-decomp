/* LEVEL_17:0x15AF50 -- placement copy of LEVEL_16_164128.c: runs the slot setup helper for both slots and then the follow-up helper. */
struct Obj1642C8;
extern char D_0015B300[];
extern void func_08AA98(char *table, struct Obj1642C8 *o, int a, unsigned int i);
extern void func_15B0F0(struct Obj1642C8 *o);

void func_15AF50(struct Obj1642C8 *o)
{
    unsigned int i = 0;

    do {
        func_08AA98(D_0015B300, o, 0, i);
        i++;
    } while (i < 2);
    func_15B0F0(o);
}

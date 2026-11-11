/* LEVEL_24:0x15DF70 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_0035FEE8;
extern char D_001F0178[];

extern void func_15DEE0(void);
extern void func_0E7358(int index);
extern void func_099398(struct Link *node, int value);
extern void func_15DD20(void *object);

void func_15DF70(void *object)
{
    func_15DEE0();
    func_0E7358(0x1C);
    func_099398(&D_0035FEE8, (int)D_001F0178);
    func_15DD20(object);
}

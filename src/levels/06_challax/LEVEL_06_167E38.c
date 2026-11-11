/* LEVEL_06:0x167E38 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_00382B58;
extern char D_0020F468[];

extern void func_167DA8(void);
extern void func_0E8808(int index);
extern void func_09A2F0(struct Link *node, int value);
extern void func_167BE8(void *object);

void func_167E38(void *object)
{
    func_167DA8();
    func_0E8808(0x1C);
    func_09A2F0(&D_00382B58, (int)D_0020F468);
    func_167BE8(object);
}

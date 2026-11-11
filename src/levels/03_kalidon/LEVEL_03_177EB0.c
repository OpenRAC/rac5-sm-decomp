/* LEVEL_03:0x177EB0 -- runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_003B0D48;
extern char D_0023AEE0[];

extern void func_177E20(void);
extern void func_0EDFE0(int index);
extern void func_09F8A0(struct Link *node, int value);
extern void func_177C60(void *object);

void func_177EB0(void *object)
{
    func_177E20();
    func_0EDFE0(0x1C);
    func_09F8A0(&D_003B0D48, (int)D_0023AEE0);
    func_177C60(object);
}

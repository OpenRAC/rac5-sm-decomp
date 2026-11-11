/* LEVEL_09:0x16BA70 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_0037D578;
extern char D_0020A4F0[];

extern void func_16B9E0(void);
extern void func_0EB628(int index);
extern void func_09CDD0(struct Link *node, int value);
extern void func_16B820(void *object);

void func_16BA70(void *object)
{
    func_16B9E0();
    func_0EB628(0x1C);
    func_09CDD0(&D_0037D578, (int)D_0020A4F0);
    func_16B820(object);
}

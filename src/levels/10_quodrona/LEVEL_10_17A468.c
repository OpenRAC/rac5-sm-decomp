/* LEVEL_10:0x17A468 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_0039F300;
extern char D_0022AA50[];

extern void func_17A3D8(void);
extern void func_0EF088(int index);
extern void func_0A0BF8(struct Link *node, int value);
extern void func_17A218(void *object);

void func_17A468(void *object)
{
    func_17A3D8();
    func_0EF088(0x1C);
    func_0A0BF8(&D_0039F300, (int)D_0022AA50);
    func_17A218(object);
}

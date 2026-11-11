/* LEVEL_08:0x195488 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_003E6C88;
extern char D_0026CF50[];

extern void func_1953F8(void);
extern void func_0FB190(int index);
extern void func_0AA418(struct Link *node, int value);
extern void func_195238(void *object);

void func_195488(void *object)
{
    func_1953F8();
    func_0FB190(0x1C);
    func_0AA418(&D_003E6C88, (int)D_0026CF50);
    func_195238(object);
}

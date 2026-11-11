/* LEVEL_07:0x184EA0 -- placement copy of LEVEL_03_177EB0.c: runs the setup helpers in order, initialises a list node and then the object. */
struct Link {
    int f0, f4, f8;
    struct Link *next, *prev;
    int value, f18;
};

extern struct Link D_003AB818;
extern char D_00237170[];

extern void func_184E10(void);
extern void func_0F0548(int index);
extern void func_0A1AF8(struct Link *node, int value);
extern void func_184C50(void *object);

void func_184EA0(void *object)
{
    func_184E10();
    func_0F0548(0x1C);
    func_0A1AF8(&D_003AB818, (int)D_00237170);
    func_184C50(object);
}

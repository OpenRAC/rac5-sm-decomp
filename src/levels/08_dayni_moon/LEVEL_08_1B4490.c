/* LEVEL_08:0x1B4490 -- starts the animation 0x44/0x45 on the object's linked record, clears the object's phase byte and reports success. */
struct Obj {
    char pad0[0x46];
    unsigned char f46;
    char pad47[0x11];
    char *f58;
};

extern char D_00259208[];
extern void func_07FA60(char *a0, int a1, int a2, int a3, void *a4);

int func_1B4490(struct Obj *o)
{
    func_07FA60(o->f58 + 0x18, 1, 0x44, 0x45, D_00259208);
    o->f46 = 0;
    return 1;
}

/* LEVEL_18:0x093FB8 -- placement copy of LEVEL_16_094FA8.c: selects one of the fixed-size entries for the mode and passes it to the matching helper. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_0026B328[];
extern int D_0019C320;
extern void func_094528(int a, struct Entry *e);
extern void func_094428(struct Entry *e);

void func_093FB8(int mode)
{
    switch (mode) {
    case 2:
        func_094528(1, &D_0026B328[mode]);
        break;
    case 1:
        func_094528(0, &D_0026B328[mode]);
        break;
    case 5:
        func_094428(&D_0026B328[mode]);
        break;
    default:
        func_094528(D_0019C320, &D_0026B328[mode]);
        break;
    }
}

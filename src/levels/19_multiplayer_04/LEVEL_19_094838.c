/* LEVEL_19:0x094838 -- placement copy of LEVEL_16_094FA8.c: selects one of the fixed-size entries for the mode and passes it to the matching helper. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_0026B128[];
extern int D_0019C020;
extern void func_094DA8(int a, struct Entry *e);
extern void func_094CA8(struct Entry *e);

void func_094838(int mode)
{
    switch (mode) {
    case 2:
        func_094DA8(1, &D_0026B128[mode]);
        break;
    case 1:
        func_094DA8(0, &D_0026B128[mode]);
        break;
    case 5:
        func_094CA8(&D_0026B128[mode]);
        break;
    default:
        func_094DA8(D_0019C020, &D_0026B128[mode]);
        break;
    }
}

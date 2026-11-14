/* LEVEL_16:0x094FA8 -- selects one of the fixed-size entries for the mode and passes it to the matching helper. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_0026AFA8[];
extern int D_0019AEA0;
extern void func_095518(int a, struct Entry *e);
extern void func_095418(struct Entry *e);

void func_094FA8(int mode)
{
    switch (mode) {
    case 2:
        func_095518(1, &D_0026AFA8[mode]);
        break;
    case 1:
        func_095518(0, &D_0026AFA8[mode]);
        break;
    case 5:
        func_095418(&D_0026AFA8[mode]);
        break;
    default:
        func_095518(D_0019AEA0, &D_0026AFA8[mode]);
        break;
    }
}

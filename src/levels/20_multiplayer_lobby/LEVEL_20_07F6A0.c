/* LEVEL_20:0x07F6A0 -- placement copy of LEVEL_16_094FA8.c: selects one of the fixed-size entries for the mode and passes it to the matching helper. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_0018E7E8[];
extern int D_000FD588;
extern void func_07FC10(int a, struct Entry *e);
extern void func_07FB10(struct Entry *e);

void func_07F6A0(int mode)
{
    switch (mode) {
    case 2:
        func_07FC10(1, &D_0018E7E8[mode]);
        break;
    case 1:
        func_07FC10(0, &D_0018E7E8[mode]);
        break;
    case 5:
        func_07FB10(&D_0018E7E8[mode]);
        break;
    default:
        func_07FC10(D_000FD588, &D_0018E7E8[mode]);
        break;
    }
}

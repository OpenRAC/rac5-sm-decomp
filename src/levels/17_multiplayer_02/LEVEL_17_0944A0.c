/* LEVEL_17:0x0944A0 -- placement copy of LEVEL_16_094FA8.c: selects one of the fixed-size entries for the mode and passes it to the matching helper. */
struct Entry {
    char pad[0x18];
};

extern struct Entry D_0025C2A8[];
extern int D_0018E4A0;
extern void func_094A10(int a, struct Entry *e);
extern void func_094910(struct Entry *e);

void func_0944A0(int mode)
{
    switch (mode) {
    case 2:
        func_094A10(1, &D_0025C2A8[mode]);
        break;
    case 1:
        func_094A10(0, &D_0025C2A8[mode]);
        break;
    case 5:
        func_094910(&D_0025C2A8[mode]);
        break;
    default:
        func_094A10(D_0018E4A0, &D_0025C2A8[mode]);
        break;
    }
}

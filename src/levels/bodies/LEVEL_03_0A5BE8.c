struct Entry {
    char pad[0x18];
};

extern struct Entry D_002CE2D8[];

void func_0A6000(void *);

void func_0A5BE8(int mode)
{
    switch (mode) {
    case 1:
        func_0A6000(&D_002CE2D8[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A6000(&D_002CE2D8[mode]);
        break;
    default:
        func_0A6000(&D_002CE2D8[mode]);
        break;
    }
}

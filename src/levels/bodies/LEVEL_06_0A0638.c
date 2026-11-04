struct Entry {
    char pad[0x18];
};

extern struct Entry D_002A01D8[];

void func_0A0A50(void *);

void func_0A0638(int mode)
{
    switch (mode) {
    case 1:
        func_0A0A50(&D_002A01D8[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A0A50(&D_002A01D8[mode]);
        break;
    default:
        func_0A0A50(&D_002A01D8[mode]);
        break;
    }
}

struct Entry {
    char pad[0x18];
};

extern struct Entry D_0027F318[];

void func_09FAF8(void *);

void func_09F6E0(int mode)
{
    switch (mode) {
    case 1:
        func_09FAF8(&D_0027F318[mode]);
        break;
    case 2:
        break;
    case 5:
        func_09FAF8(&D_0027F318[mode]);
        break;
    default:
        func_09FAF8(&D_0027F318[mode]);
        break;
    }
}

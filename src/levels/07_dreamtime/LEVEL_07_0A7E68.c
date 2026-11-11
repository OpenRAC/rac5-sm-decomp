struct Entry {
    char pad[0x18];
};

extern struct Entry D_002C8D58[];

void func_0A8280(void *);

void func_0A7E68(int mode)
{
    switch (mode) {
    case 1:
        func_0A8280(&D_002C8D58[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A8280(&D_002C8D58[mode]);
        break;
    default:
        func_0A8280(&D_002C8D58[mode]);
        break;
    }
}

struct Entry {
    char pad[0x18];
};

extern struct Entry D_002CA958[];

void func_0ACB90(void *);

void func_0AC778(int mode)
{
    switch (mode) {
    case 1:
        func_0ACB90(&D_002CA958[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0ACB90(&D_002CA958[mode]);
        break;
    default:
        func_0ACB90(&D_002CA958[mode]);
        break;
    }
}

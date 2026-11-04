struct Entry {
    char pad[0x18];
};

extern struct Entry D_002B3458[];

void func_0A6280(void *);

void func_0A5E68(int mode)
{
    switch (mode) {
    case 1:
        func_0A6280(&D_002B3458[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A6280(&D_002B3458[mode]);
        break;
    default:
        func_0A6280(&D_002B3458[mode]);
        break;
    }
}

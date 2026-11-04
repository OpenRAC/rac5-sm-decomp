struct Entry {
    char pad[0x18];
};

extern struct Entry D_0029ABD8[];

void func_0A3530(void *);

void func_0A3118(int mode)
{
    switch (mode) {
    case 1:
        func_0A3530(&D_0029ABD8[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A3530(&D_0029ABD8[mode]);
        break;
    default:
        func_0A3530(&D_0029ABD8[mode]);
        break;
    }
}

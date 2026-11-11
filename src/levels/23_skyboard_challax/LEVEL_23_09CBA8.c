struct Entry {
    char pad[0x18];
};

extern struct Entry D_00284898[];

void func_09CFF0(void *);

void func_09CBA8(int mode)
{
    switch (mode) {
    case 1:
        func_09CFF0(&D_00284898[mode]);
        break;
    case 2:
        break;
    case 5:
        func_09CFF0(&D_00284898[mode]);
        break;
    default:
        func_09CFF0(&D_00284898[mode]);
        break;
    }
}

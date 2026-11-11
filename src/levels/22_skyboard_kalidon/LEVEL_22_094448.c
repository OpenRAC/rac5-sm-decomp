struct Entry {
    char pad[0x18];
};

extern struct Entry D_00209018[];

void func_094890(void *);

void func_094448(int mode)
{
    switch (mode) {
    case 1:
        func_094890(&D_00209018[mode]);
        break;
    case 2:
        break;
    case 5:
        func_094890(&D_00209018[mode]);
        break;
    default:
        func_094890(&D_00209018[mode]);
        break;
    }
}

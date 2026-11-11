struct Entry {
    char pad[0x18];
};

extern struct Entry D_003026D8[];

void func_0B0B78(void *);

void func_0B0760(int mode)
{
    switch (mode) {
    case 1:
        func_0B0B78(&D_003026D8[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0B0B78(&D_003026D8[mode]);
        break;
    default:
        func_0B0B78(&D_003026D8[mode]);
        break;
    }
}

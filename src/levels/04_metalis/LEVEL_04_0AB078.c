struct Entry {
    char pad[0x18];
};

extern struct Entry D_002CDC58[];

void func_0AB490(void *);

void func_0AB078(int mode)
{
    switch (mode) {
    case 1:
        func_0AB490(&D_002CDC58[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0AB490(&D_002CDC58[mode]);
        break;
    default:
        func_0AB490(&D_002CDC58[mode]);
        break;
    }
}

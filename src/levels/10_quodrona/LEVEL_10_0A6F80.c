struct Entry {
    char pad[0x18];
};

extern struct Entry D_002BC858[];

void func_0A7398(void *);

void func_0A6F80(int mode)
{
    switch (mode) {
    case 1:
        func_0A7398(&D_002BC858[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A7398(&D_002BC858[mode]);
        break;
    default:
        func_0A7398(&D_002BC858[mode]);
        break;
    }
}

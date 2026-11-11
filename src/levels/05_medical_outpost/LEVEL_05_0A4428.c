struct Entry {
    char pad[0x18];
};

extern struct Entry D_0029F318[];

void func_0A4840(void *);

void func_0A4428(int mode)
{
    switch (mode) {
    case 1:
        func_0A4840(&D_0029F318[mode]);
        break;
    case 2:
        break;
    case 5:
        func_0A4840(&D_0029F318[mode]);
        break;
    default:
        func_0A4840(&D_0029F318[mode]);
        break;
    }
}

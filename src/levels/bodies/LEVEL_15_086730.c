struct Entry {
    char pad[0x18];
};

extern struct Entry D_001CB498[];

void func_086B48(void *);

void func_086730(int mode)
{
    switch (mode) {
    case 1:
        func_086B48(&D_001CB498[mode]);
        break;
    case 2:
        break;
    case 5:
        func_086B48(&D_001CB498[mode]);
        break;
    default:
        func_086B48(&D_001CB498[mode]);
        break;
    }
}

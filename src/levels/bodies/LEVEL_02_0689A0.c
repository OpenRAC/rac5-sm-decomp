extern unsigned char D_00250668[];

void func_0689A0(char *record, unsigned char value)
{
    if (*(unsigned short *)(record + 0x108) != 10) {
        D_00250668[0x44] |= 4;
        D_00250668[0x45] = value;
    }
}

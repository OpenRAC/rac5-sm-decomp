extern char D_00150000[];

int func_041280(char *o, int flags)
{
    int state;

    if (flags & 0x200) {
        *(short *)(o + 0x100) = 4;
        *(float *)(o + 0x140) = 15.0002985f;
        *(int *)(o + 0x168) = 2;
        *(int *)(o + 0x134) = 0;
        return 1;
    }
    state = *(int *)(*(int *)(D_00150000 - 0x73D4) + 0x24);
    if (state == 2 ? (flags & 0x4100) : (flags & 0x4000)) {
        *(int *)(o + 0xC0C) = 5;
        return 1;
    }
    return 0;
}

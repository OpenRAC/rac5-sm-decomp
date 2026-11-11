/* LEVEL_04:0x14F988 -- maps selector values 8 and 24 to codes 1 and 2, else zero. */
int func_14F988(unsigned int a0)
{
    switch (a0) {
    case 4:
        return 0;
    case 8:
        return 1;
    case 24:
        return 2;
    default:
        return 0;
    }
}

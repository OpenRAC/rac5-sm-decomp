/* LEVEL_03:0x18EBB0 -- selects one of four sub-block addresses from a mode byte, or returns null for other modes. */

char *func_18EBB0(char *a0)
{
    unsigned char mode;

    mode = (unsigned char)a0[0x46];
    a0 = *(char **)(a0 + 0x54);
    switch (mode) {
    case 0:
        return a0 + 0x18;
    case 1:
        return a0 + 0x38;
    case 2:
        return a0 + 0x48;
    case 3:
        return a0 + 0x68;
    default:
        return 0;
    }
}

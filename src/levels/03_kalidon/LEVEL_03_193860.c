/* LEVEL_03:0x193860 -- maps a kind to its class: 0 gives 1, 1 to 3 give 2, anything else 0xFF. */
int func_193860(void *self, unsigned int kind)
{
    switch (kind) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 2;
    case 3:
        return 2;
    default:
        return 0xFF;
    }
}

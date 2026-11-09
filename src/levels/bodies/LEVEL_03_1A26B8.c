/* LEVEL_03:0x1A26B8 -- returns a fixed blend factor selected by a state byte. */

float func_1A26B8(char *s)
{
    unsigned char st;
    char *p;

    p = *(char **)(s + 0x54);
    st = (unsigned char)p[0xA1];
    switch (st) {
    case 0:
        return 0.7f;
    case 1:
        return 0.8f;
    case 2:
        return 0.9f;
    case 3:
        return 1.0f;
    default:
        return 0.0f;
    }
}

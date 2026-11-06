/* LEVEL_02.REL:0x04F9E0, bounded 196-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +12. Not linked into the accepted
 * gate or counted.
 * Reopen: GCC merges the 0x4100/0x4000 masks into one conditional andi, while the retail keeps two separate andi with distinct return-0 paths. Reopen with separate mask tests and two exits.
 */
extern int D_00208C2C;

int func_0004F9E0(char *obj)
{
    int state = *(int *)(obj + 0x168);
    char *a3 = obj + 0xC0;
    int v1;
    float f;

    if (state != 2)
        return 0;
    if (!(*(float *)(obj + 0x128) <= 0.0f))
        return 0;
    if (!(*(float *)(obj + 0x134) <= 0.0f))
        return 0;
    f = *(float *)(obj + 0x140) - 1.0f;
    *(float *)(obj + 0x140) = f;
    if (!(f <= 0.0f))
        return 0;
    v1 = D_00208C2C;
    if (*(int *)(v1 + 0x24) == state) {
        if ((*(int *)(a3 + 0x14) & 0x4100) == 0)
            return 0;
    } else {
        if ((*(int *)(a3 + 0x14) & 0x4000) == 0)
            return 0;
    }
    if (*(int *)(obj + 0x5AC) == 0)
        return 0;
    *(short *)(obj + 0x102) = 0xF;
    return 1;
}

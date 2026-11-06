/* LEVEL_02.REL:0x1156C8, bounded 200-byte candidate.
 * Isolated pinned C object: 260 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The Ghidra flow for the path hash is wrong. Reopen from module offset 0x11573C, the '/' and '\\' skip loop.
 */
extern unsigned int D_0022C0C0[];

unsigned int func_1156C8(unsigned char *param_1)
{
    unsigned int hash;
    unsigned char c;
    unsigned char other;
    unsigned int v;

    if (param_1 == 0)
        return 0;
    hash = 0xFFFFFFFF;
    c = *param_1;
    for (;;) {
        if (c == 0)
            return ~hash;
        if (c == 0x2F || c == 0x5C)
            break;
        other = *param_1;
        if (other == 0x2F)
            v = (hash & 0xFF) ^ 0x5C;
        else
            v = *param_1 ^ (hash & 0xFF);
        hash = (hash >> 8) ^ D_0022C0C0[v];
        c = param_1[1];
        param_1++;
    }
    other = *param_1;
    param_1++;
    for (;;) {
        c = *param_1;
        while (c != 0x2F) {
            if (c != 0x5C) {
                if (other == 0x2F)
                    v = (hash & 0xFF) ^ 0x5C;
                else
                    v = *param_1 ^ (hash & 0xFF);
                hash = (hash >> 8) ^ D_0022C0C0[v];
                c = param_1[1];
                param_1++;
                other = *param_1;
                break;
            }
            c = *param_1;
            param_1++;
        }
        if (c == 0)
            return ~hash;
    }
}

/* LEVEL_01.REL:0x0A0120: Ghidra body 140 bytes.
 * Pinned pure C links 140 bytes and first differs at +36.
 * Recheck the pad record store order and named call scheduling. No matching credit.
 */
extern unsigned char D_0029C688[];
extern int scePadGetState(int, int);
extern void scePadSetActDirect(int, int, void *);

void func_0A0120(void)
{
    unsigned int index;
    unsigned char *pad = D_0029C688;
    for (index = 0; index < 2; index++, pad += 0x11c) {
        *(int *)(pad + 0x0c) = 0;
        *(int *)(pad + 0x10) = 0;
        *(int *)(pad + 0x14) = 0;
        *(int *)(pad + 0x118) = 0;
        pad[1] = 0;
        pad[0] = 0;
        if (scePadGetState(index, 0) == 6)
            scePadSetActDirect(index, 0, pad);
    }
}

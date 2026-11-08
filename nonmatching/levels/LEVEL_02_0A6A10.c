/* LEVEL_02.REL:0x0A6A10: reviewed 140-byte candidate.
 * pinned C with gnu-ee-trial links 140 bytes; first differs at +36.
 * Retry: Recover pad record store and branch scheduling; compare the retained
 * 0x0A0120 neighbour.
 * No matching credit.
 */
extern unsigned int D_002B3B88;
extern long scePadGetState(unsigned int port, unsigned int slot);
extern void scePadSetActDirect(unsigned int port, unsigned int slot, void *data);

void func_0A6A10(void) {
    char *entry = (char *)&D_002B3B88;
    unsigned int port;
    for (port = 0; port < 2; ++port, entry += 0x11C) {
        *(unsigned int *)(entry + 0x0C) = 0;
        *(unsigned int *)(entry + 0x10) = 0;
        *(unsigned int *)(entry + 0x14) = 0;
        *(unsigned int *)(entry + 0x118) = 0;
        entry[1] = 0;
        entry[0] = 0;
        if (scePadGetState(port, 0) != 6) {
            continue;
        }
        scePadSetActDirect(port, 0, entry);
    }
}

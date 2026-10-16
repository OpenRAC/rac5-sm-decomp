extern int display_vcount; /* 0x01EF57B4 */

int VsyncIntHand__Fi(int unused) {
    (void)unused;
    __asm__ __volatile__("sync\n\tsync.p");
    display_vcount = display_vcount + 1;
    __asm__ __volatile__("sync");
    __asm__ __volatile__("ei");
    return 1;
}

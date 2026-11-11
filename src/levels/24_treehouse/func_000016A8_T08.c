/* Select the active record of a fixed-stride table. */
extern unsigned char D_001F7A80[];
extern void *D_001BFED4;

void func_000016A8(int index) {
    D_001BFED4 = D_001F7A80 + index * 0x1CC0;
}

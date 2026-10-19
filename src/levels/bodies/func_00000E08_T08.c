/* Select the active record of a fixed-stride table. */
extern unsigned char D_001F77E0[];
extern void *D_001BFEC8;

void func_00000E08(int index) {
    D_001BFEC8 = D_001F77E0 + index * 0x118;
}

/* Select the active record of a fixed-stride table. */
extern unsigned char D_001F8D60[];
extern void *D_001C2648;

void func_00001000(int index) {
    D_001C2648 = D_001F8D60 + index * 0x118;
}

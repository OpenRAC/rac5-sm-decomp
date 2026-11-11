/* Select the active record of a fixed-stride table. */
extern unsigned char D_001F9000[];
extern void *D_001C2654;

void func_000018A0(int index) {
    D_001C2654 = D_001F9000 + index * 0x1CC0;
}

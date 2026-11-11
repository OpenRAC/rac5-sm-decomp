/* Select the active record of a fixed-stride table. */
extern unsigned char D_0017D780[];
extern void *D_0014E5D4;

void func_00001610(int index) {
    D_0014E5D4 = D_0017D780 + index * 0x1CC0;
}

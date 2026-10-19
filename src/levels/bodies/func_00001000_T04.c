/* LEVEL_06/0x1000: publish &table[index] into the level state word. */
extern char D_00218660[];
extern char *D_001DE148;

void func_00001000(int index) {
    D_001DE148 = D_00218660 + index * 0x118;
}

/* LEVEL_06/0x18A0: same publish, second table. */
extern char D_00218900[];
extern char *D_001DE154;

void func_000018A0(int index) {
    D_001DE154 = D_00218900 + index * 0x1CC0;
}

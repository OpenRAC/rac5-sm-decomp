/* LEVEL_08:0x1F0F88 -- placement copy of LEVEL_04_1C7E08.c: on first use merges a field into the top bits of a global word and stores the handle returned for it. */
extern unsigned int D_002526E4;
extern int D_002526E8;
extern unsigned int D_002E711C;
extern int func_0F8AD8(unsigned int word);

void func_1F0F88(void)
{
    if (D_002526E8 == 0) {
        D_002526E4 = (D_002526E4 & 0xF800FFFF) | (D_002E711C << 16);
        D_002526E8 = func_0F8AD8(D_002526E4);
    }
}

/* LEVEL_24:0x196A30 -- placement copy of LEVEL_04_1C7E08.c: on first use merges a field into the top bits of a global word and stores the handle returned for it. */
extern unsigned int D_001D9DDC;
extern int D_001D9DE0;
extern unsigned int D_00263D5C;
extern int func_0E4CA0(unsigned int word);

void func_196A30(void)
{
    if (D_001D9DE0 == 0) {
        D_001D9DDC = (D_001D9DDC & 0xF800FFFF) | (D_00263D5C << 16);
        D_001D9DE0 = func_0E4CA0(D_001D9DDC);
    }
}

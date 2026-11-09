/* LEVEL_20:0x0904D8 -- placement copy of LEVEL_16_0A5F58.c: runs the four per-player update passes for both
   players. */
extern void func_08FE90(unsigned int player);
extern void func_08FF38(unsigned int player);
extern void func_08FFA0(unsigned int player);
extern void func_0926C0(unsigned int player);

void func_0904D8(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_08FE90(i);
        func_08FF38(i);
        func_08FFA0(i);
        func_0926C0(i);
    }
}

/* LEVEL_07:0x19CFD8 -- stores the id of the packed (module word, 0xA00030C1) name in the global. */
extern unsigned int D_002AD750;
extern int D_0021D08C;
extern int func_103480(unsigned int);

void func_19CFD8(void)
{
    D_0021D08C = func_103480((D_002AD750 << 16) | 0xA00030C1u);
}

/* LEVEL_24:0x0A0DE8 -- placement copy of LEVEL_01_0A7570.c: calls four helpers in order, passing one global pointer pair. */
extern void func_0A0B90(void);
extern int func_0A0AC8(unsigned int, int);
extern int func_0A0560(void);
extern int func_09FF48(unsigned int, unsigned int);
extern unsigned int D_001C7560;
extern unsigned int D_001C7564;

void func_0A0DE8(int value, int unused)
{
    (void)unused;
    func_0A0B90();
    func_0A0AC8(D_001C7560, value);
    func_0A0560();
    func_09FF48(D_001C7560, D_001C7564);
}

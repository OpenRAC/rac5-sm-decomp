/* LEVEL_18:0x096B00 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001AB228;
extern unsigned int D_001AB22C;

extern void func_08ED00(unsigned int a);
extern void func_08EEA0(int a, int b, int c, int d, int e);
extern void func_08EBE0(int a);
extern void func_08EC00(int a);
extern void func_08EE78(int a, unsigned int b, unsigned int c);
extern void func_08ED58(int a, int b);
extern void func_08ED60(int a, int b);
extern void func_08ED68(int a, int b);
extern void func_08ED78(float a, float b);

void func_096B00(void)
{
    func_08ED00(0xFFFFFFFF);
    func_08EEA0(0, 2, 3, 0, 0);
    func_08EBE0(4);
    func_08EC00(0xA);
    func_08EC00(0xB);
    func_08EC00(0xC);
    func_08EC00(0xD);
    func_08EC00(0xE);
    func_08EC00(0);
    func_08EC00(1);
    func_08EC00(0x11);
    func_08EE78(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_08ED58(1, 1);
    func_08ED60(0, 1);
    func_08ED68(0, 0);
    func_08ED78(16.0f, 16.0f);
    func_08EC00(5);
    D_001AB22C |= 1;
    D_001AB228 |= 1;
    if ((D_001AB228 & 4) == 0 || (D_001AB22C & 4) != 0) {
        func_08EC00(9);
        D_001AB22C &= ~4;
        D_001AB228 |= 4;
    }
}

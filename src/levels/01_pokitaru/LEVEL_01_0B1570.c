/* LEVEL_01:0x0B1570 -- runs func_0B1560, then stores a byte and a second byte widened to a word in two globals. */
extern unsigned char D_001FC158;
extern unsigned int D_001FC154;
extern unsigned int func_0B1560(void);

void func_0B1570(int a, unsigned char b)
{
    func_0B1560();
    D_001FC158 = a;
    D_001FC154 = b;
}

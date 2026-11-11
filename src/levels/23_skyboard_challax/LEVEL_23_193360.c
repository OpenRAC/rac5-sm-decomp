/* LEVEL_23:0x193360 -- placement copy of LEVEL_03_1C4918.c: compares a global byte-sized selector with an argument and runs a fixed helper sequence on match. */
extern int D_001C7D7C;
extern int func_17DEC0(int a0, unsigned int a1);
extern void func_193708(int a0);
extern void func_1909C8(int a0);
extern void func_191AE0(int a0);
extern void func_1921A0(int a0);

void func_193360(int a0)
{
    if (D_001C7D7C >= 0) {
        if (func_17DEC0(0, *(unsigned char *)&D_001C7D7C) != a0) {
            return;
        }
    }
    func_193708(a0);
    func_1909C8(a0);
    func_191AE0(a0);
    func_1921A0(a0);
}

/* LEVEL_07:0x1A0A30 -- when the pending flag byte is set, plays the sound once and clears the flag. */
extern unsigned char D_0021D0A8;
extern void func_0277E0(int a0, int a1, int a2);

void func_1A0A30(void)
{
    if (D_0021D0A8 != 0) {
        func_0277E0(0x8A, 0, 0xFF);
        D_0021D0A8 = 0;
    }
}

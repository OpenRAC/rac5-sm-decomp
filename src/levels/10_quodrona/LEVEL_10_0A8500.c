/* LEVEL_10:0x0A8500 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_00200168;
extern int D_0020016C;
extern unsigned int D_00200170;
extern unsigned char D_00200178;
extern int D_0020017C;
extern char D_0021A118[];

extern long long func_0A8448(void);
extern void func_0A7118(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A7150(int a);
extern int func_0B5F58(unsigned char value);
extern int func_0A6EF0(int index);
extern void func_0B5F88(unsigned int value);
extern void func_0A84C0(int value);
extern void func_0A84E8(int value);
extern void func_0A8688(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A8500(void)
{
    if (func_0A8448() != 0) {
        func_0A7118(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B5F58(3);
        func_0B5F88((unsigned char)func_0A6EF0(6));
        if (func_0A7150(6) != 0) {
            switch (D_00200170) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_00200170 = 1;
                    D_00200178 = 0;
                    D_0020017C = 0x1B;
                }
                break;
            case 1:
                func_0B5F58(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A84E8, 0);
                if (D_00200178 != 0) {
                    D_00200170 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A8688(D_0020016C, D_00200168);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A84C0(0);
                    D_00200178 = 0;
                } else {
                    D_0020017C = D_0020017C - 1;
                    if (D_0020017C == 0) {
                        func_0A84C0(1);
                        printf(D_0021A118);
                    }
                }
                break;
            }
        }
    }
}

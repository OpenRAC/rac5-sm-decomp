/* LEVEL_07:0x0A93E8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_0020B468;
extern int D_0020B46C;
extern unsigned int D_0020B470;
extern unsigned char D_0020B478;
extern int D_0020B47C;
extern char D_00225E98[];

extern int func_0A9330(void);
extern void func_0A8000(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A8038(int a);
extern int func_0B6DE0(unsigned char value);
extern int func_0A7DD8(int index);
extern void func_0B6E10(unsigned int value);
extern void func_0A93A8(int value);
extern void func_0A93D0(int value);
extern void func_0A9570(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A93E8(void)
{
    if (func_0A9330() != 0) {
        func_0A8000(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B6DE0(3);
        func_0B6E10((unsigned char)func_0A7DD8(6));
        if (func_0A8038(6) != 0) {
            switch (D_0020B470) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_0020B470 = 1;
                    D_0020B478 = 0;
                    D_0020B47C = 0x1B;
                }
                break;
            case 1:
                func_0B6DE0(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A93D0, 0);
                if (D_0020B478 != 0) {
                    D_0020B470 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A9570(D_0020B46C, D_0020B468);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A93A8(0);
                    D_0020B478 = 0;
                } else {
                    D_0020B47C = D_0020B47C - 1;
                    if (D_0020B47C == 0) {
                        func_0A93A8(1);
                        printf(D_00225E98);
                    }
                }
                break;
            }
        }
    }
}

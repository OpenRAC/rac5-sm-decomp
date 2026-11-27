/* LEVEL_01:0x0A73E8 -- pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001F7168;
extern int D_001F716C;
extern unsigned int D_001F7170;
extern unsigned char D_001F7178;
extern int D_001F717C;
extern char D_00211198[];

extern long long func_0A7330(void);
extern void func_0A6000(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A6038(int a);
extern int func_0B4D80(unsigned char value);
extern int func_0A5DD8(int index);
extern void func_0B4DB0(unsigned int value);
extern void func_0A73A8(int value);
extern void func_0A73D0(int value);
extern void func_0A7570(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A73E8(void)
{
    if (func_0A7330() != 0) {
        func_0A6000(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B4D80(3);
        func_0B4DB0((unsigned char)func_0A5DD8(6));
        if (func_0A6038(6) != 0) {
            switch (D_001F7170) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001F7170 = 1;
                    D_001F7178 = 0;
                    D_001F717C = 0x1B;
                }
                break;
            case 1:
                func_0B4D80(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A73D0, 0);
                if (D_001F7178 != 0) {
                    D_001F7170 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A7570(D_001F716C, D_001F7168);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A73A8(0);
                    D_001F7178 = 0;
                } else {
                    D_001F717C = D_001F717C - 1;
                    if (D_001F717C == 0) {
                        func_0A73A8(1);
                        printf(D_00211198);
                    }
                }
                break;
            }
        }
    }
}

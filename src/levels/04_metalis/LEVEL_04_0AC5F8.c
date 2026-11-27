/* LEVEL_04:0x0AC5F8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_00210628;
extern int D_0021062C;
extern unsigned int D_00210630;
extern unsigned char D_00210638;
extern int D_0021063C;
extern char D_0022AB18[];

extern long long func_0AC540(void);
extern void func_0AB210(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0AB248(int a);
extern int func_0BA470(unsigned char value);
extern int func_0AAFE8(int index);
extern void func_0BA4A0(unsigned int value);
extern void func_0AC5B8(int value);
extern void func_0AC5E0(int value);
extern void func_0AC780(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0AC5F8(void)
{
    if (func_0AC540() != 0) {
        func_0AB210(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0BA470(3);
        func_0BA4A0((unsigned char)func_0AAFE8(6));
        if (func_0AB248(6) != 0) {
            switch (D_00210630) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_00210630 = 1;
                    D_00210638 = 0;
                    D_0021063C = 0x1B;
                }
                break;
            case 1:
                func_0BA470(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0AC5E0, 0);
                if (D_00210638 != 0) {
                    D_00210630 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0AC780(D_0021062C, D_00210628);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0AC5B8(0);
                    D_00210638 = 0;
                } else {
                    D_0021063C = D_0021063C - 1;
                    if (D_0021063C == 0) {
                        func_0AC5B8(1);
                        printf(D_0022AB18);
                    }
                }
                break;
            }
        }
    }
}

/* LEVEL_03:0x0A7168 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_0020F7E8;
extern int D_0020F7EC;
extern unsigned int D_0020F7F0;
extern unsigned char D_0020F7F8;
extern int D_0020F7FC;
extern char D_0022A098[];

extern int func_0A70B0(void);
extern void func_0A5D80(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A5DB8(int a);
extern int func_0B4B68(unsigned char value);
extern int func_0A5B58(int index);
extern void func_0B4B98(unsigned int value);
extern void func_0A7128(int value);
extern void func_0A7150(int value);
extern void func_0A72F0(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A7168(void)
{
    if (func_0A70B0() != 0) {
        func_0A5D80(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B4B68(3);
        func_0B4B98((unsigned char)func_0A5B58(6));
        if (func_0A5DB8(6) != 0) {
            switch (D_0020F7F0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_0020F7F0 = 1;
                    D_0020F7F8 = 0;
                    D_0020F7FC = 0x1B;
                }
                break;
            case 1:
                func_0B4B68(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A7150, 0);
                if (D_0020F7F8 != 0) {
                    D_0020F7F0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A72F0(D_0020F7EC, D_0020F7E8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A7128(0);
                    D_0020F7F8 = 0;
                } else {
                    D_0020F7FC = D_0020F7FC - 1;
                    if (D_0020F7FC == 0) {
                        func_0A7128(1);
                        printf(D_0022A098);
                    }
                }
                break;
            }
        }
    }
}

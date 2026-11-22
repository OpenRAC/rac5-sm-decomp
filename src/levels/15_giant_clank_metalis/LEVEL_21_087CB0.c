/* LEVEL_21:0x087CB0 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_0014BDE8;
extern int D_0014BDEC;
extern unsigned int D_0014BDF0;
extern unsigned char D_0014BDF8;
extern int D_0014BDFC;
extern char D_00165918[];

extern int func_087BF8(void);
extern void func_0868C8(int a, unsigned int b, int c, int d, int e, int f);
extern int func_086900(int a);
extern int func_095338(unsigned char value);
extern int func_0866A0(int index);
extern void func_095368(unsigned int value);
extern void func_087C70(int value);
extern void func_087C98(int value);
extern void func_087E38(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_087CB0(void)
{
    if (func_087BF8() != 0) {
        func_0868C8(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_095338(3);
        func_095368((unsigned char)func_0866A0(6));
        if (func_086900(6) != 0) {
            switch (D_0014BDF0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_0014BDF0 = 1;
                    D_0014BDF8 = 0;
                    D_0014BDFC = 0x1B;
                }
                break;
            case 1:
                func_095338(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_087C98, 0);
                if (D_0014BDF8 != 0) {
                    D_0014BDF0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_087E38(D_0014BDEC, D_0014BDE8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_087C70(0);
                    D_0014BDF8 = 0;
                } else {
                    D_0014BDFC = D_0014BDFC - 1;
                    if (D_0014BDFC == 0) {
                        func_087C70(1);
                        printf(D_00165918);
                    }
                }
                break;
            }
        }
    }
}

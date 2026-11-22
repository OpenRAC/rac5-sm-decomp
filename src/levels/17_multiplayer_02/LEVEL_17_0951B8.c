/* LEVEL_17:0x0951B8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_00198738;
extern int D_0019873C;
extern unsigned int D_00198740;
extern unsigned char D_00198748;
extern int D_0019874C;
extern char D_001B9348[];

extern int func_095100(void);
extern void func_094660(int a, unsigned int b, int c, int d, int e, int f);
extern int func_094698(int a);
extern int func_0A3140(unsigned char value);
extern int func_094410(int index);
extern void func_0A3170(unsigned int value);
extern void func_095178(int value);
extern void func_0951A0(int value);
extern void func_095340(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0951B8(void)
{
    if (func_095100() != 0) {
        func_094660(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0A3140(3);
        func_0A3170((unsigned char)func_094410(6));
        if (func_094698(6) != 0) {
            switch (D_00198740) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_00198740 = 1;
                    D_00198748 = 0;
                    D_0019874C = 0x1B;
                }
                break;
            case 1:
                func_0A3140(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0951A0, 0);
                if (D_00198748 != 0) {
                    D_00198740 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_095340(D_0019873C, D_00198738);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_095178(0);
                    D_00198748 = 0;
                } else {
                    D_0019874C = D_0019874C - 1;
                    if (D_0019874C == 0) {
                        func_095178(1);
                        printf(D_001B9348);
                    }
                }
                break;
            }
        }
    }
}

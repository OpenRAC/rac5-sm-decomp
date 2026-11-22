/* LEVEL_05:0x0A59A8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001E64E8;
extern int D_001E64EC;
extern unsigned int D_001E64F0;
extern unsigned char D_001E64F8;
extern int D_001E64FC;
extern char D_00200098[];

extern int func_0A58F0(void);
extern void func_0A45C0(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A45F8(int a);
extern int func_0B3340(unsigned char value);
extern int func_0A4398(int index);
extern void func_0B3370(unsigned int value);
extern void func_0A5968(int value);
extern void func_0A5990(int value);
extern void func_0A5B30(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A59A8(void)
{
    if (func_0A58F0() != 0) {
        func_0A45C0(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B3340(3);
        func_0B3370((unsigned char)func_0A4398(6));
        if (func_0A45F8(6) != 0) {
            switch (D_001E64F0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001E64F0 = 1;
                    D_001E64F8 = 0;
                    D_001E64FC = 0x1B;
                }
                break;
            case 1:
                func_0B3340(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A5990, 0);
                if (D_001E64F8 != 0) {
                    D_001E64F0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A5B30(D_001E64EC, D_001E64E8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A5968(0);
                    D_001E64F8 = 0;
                } else {
                    D_001E64FC = D_001E64FC - 1;
                    if (D_001E64FC == 0) {
                        func_0A5968(1);
                        printf(D_00200098);
                    }
                }
                break;
            }
        }
    }
}

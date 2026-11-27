/* LEVEL_19:0x095550 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001A62B8;
extern int D_001A62BC;
extern unsigned int D_001A62C0;
extern unsigned char D_001A62C8;
extern int D_001A62CC;
extern char D_001C70C8[];

extern long long func_095498(void);
extern void func_0949F8(int a, unsigned int b, int c, int d, int e, int f);
extern int func_094A30(int a);
extern int func_0A34D8(unsigned char value);
extern int func_0947A8(int index);
extern void func_0A3508(unsigned int value);
extern void func_095510(int value);
extern void func_095538(int value);
extern void func_0956D8(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_095550(void)
{
    if (func_095498() != 0) {
        func_0949F8(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0A34D8(3);
        func_0A3508((unsigned char)func_0947A8(6));
        if (func_094A30(6) != 0) {
            switch (D_001A62C0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001A62C0 = 1;
                    D_001A62C8 = 0;
                    D_001A62CC = 0x1B;
                }
                break;
            case 1:
                func_0A34D8(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_095538, 0);
                if (D_001A62C8 != 0) {
                    D_001A62C0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0956D8(D_001A62BC, D_001A62B8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_095510(0);
                    D_001A62C8 = 0;
                } else {
                    D_001A62CC = D_001A62CC - 1;
                    if (D_001A62CC == 0) {
                        func_095510(1);
                        printf(D_001C70C8);
                    }
                }
                break;
            }
        }
    }
}

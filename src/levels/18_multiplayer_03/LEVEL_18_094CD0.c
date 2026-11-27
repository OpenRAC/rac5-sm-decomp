/* LEVEL_18:0x094CD0 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001A65B8;
extern int D_001A65BC;
extern unsigned int D_001A65C0;
extern unsigned char D_001A65C8;
extern int D_001A65CC;
extern char D_001C7448[];

extern long long func_094C18(void);
extern void func_094178(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0941B0(int a);
extern int func_0A2C58(unsigned char value);
extern int func_093F28(int index);
extern void func_0A2C88(unsigned int value);
extern void func_094C90(int value);
extern void func_094CB8(int value);
extern void func_094E58(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_094CD0(void)
{
    if (func_094C18() != 0) {
        func_094178(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0A2C58(3);
        func_0A2C88((unsigned char)func_093F28(6));
        if (func_0941B0(6) != 0) {
            switch (D_001A65C0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001A65C0 = 1;
                    D_001A65C8 = 0;
                    D_001A65CC = 0x1B;
                }
                break;
            case 1:
                func_0A2C58(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_094CB8, 0);
                if (D_001A65C8 != 0) {
                    D_001A65C0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_094E58(D_001A65BC, D_001A65B8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_094C90(0);
                    D_001A65C8 = 0;
                } else {
                    D_001A65CC = D_001A65CC - 1;
                    if (D_001A65CC == 0) {
                        func_094C90(1);
                        printf(D_001C7448);
                    }
                }
                break;
            }
        }
    }
}

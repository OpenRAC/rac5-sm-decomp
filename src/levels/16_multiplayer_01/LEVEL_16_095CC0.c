/* LEVEL_16:0x095CC0 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001A5138;
extern int D_001A513C;
extern unsigned int D_001A5140;
extern unsigned char D_001A5148;
extern int D_001A514C;
extern char D_001C5EC8[];

extern int func_095C08(void);
extern void func_095168(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0951A0(int a);
extern int func_0A3C60(unsigned char value);
extern int func_094F18(int index);
extern void func_0A3C90(unsigned int value);
extern void func_095C80(int value);
extern void func_095CA8(int value);
extern void func_095E48(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_095CC0(void)
{
    if (func_095C08() != 0) {
        func_095168(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0A3C60(3);
        func_0A3C90((unsigned char)func_094F18(6));
        if (func_0951A0(6) != 0) {
            switch (D_001A5140) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001A5140 = 1;
                    D_001A5148 = 0;
                    D_001A514C = 0x1B;
                }
                break;
            case 1:
                func_0A3C60(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_095CA8, 0);
                if (D_001A5148 != 0) {
                    D_001A5140 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_095E48(D_001A513C, D_001A5138);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_095C80(0);
                    D_001A5148 = 0;
                } else {
                    D_001A514C = D_001A514C - 1;
                    if (D_001A514C == 0) {
                        func_095C80(1);
                        printf(D_001C5EC8);
                    }
                }
                break;
            }
        }
    }
}

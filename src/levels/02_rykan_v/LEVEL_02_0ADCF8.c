/* LEVEL_02:0x0ADCF8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_0020C128;
extern int D_0020C12C;
extern unsigned int D_0020C130;
extern unsigned char D_0020C138;
extern int D_0020C13C;
extern char D_00226118[];

extern long long func_0ADC40(void);
extern void func_0AC910(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0AC948(int a);
extern int func_0BB690(unsigned char value);
extern int func_0AC6E8(int index);
extern void func_0BB6C0(unsigned int value);
extern void func_0ADCB8(int value);
extern void func_0ADCE0(int value);
extern void func_0ADE80(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0ADCF8(void)
{
    if (func_0ADC40() != 0) {
        func_0AC910(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0BB690(3);
        func_0BB6C0((unsigned char)func_0AC6E8(6));
        if (func_0AC948(6) != 0) {
            switch (D_0020C130) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_0020C130 = 1;
                    D_0020C138 = 0;
                    D_0020C13C = 0x1B;
                }
                break;
            case 1:
                func_0BB690(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0ADCE0, 0);
                if (D_0020C138 != 0) {
                    D_0020C130 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0ADE80(D_0020C12C, D_0020C128);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0ADCB8(0);
                    D_0020C138 = 0;
                } else {
                    D_0020C13C = D_0020C13C - 1;
                    if (D_0020C13C == 0) {
                        func_0ADCB8(1);
                        printf(D_00226118);
                    }
                }
                break;
            }
        }
    }
}

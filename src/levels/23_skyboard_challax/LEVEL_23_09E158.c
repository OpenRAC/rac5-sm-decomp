/* LEVEL_23:0x09E158 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001CA568;
extern int D_001CA56C;
extern unsigned int D_001CA570;
extern unsigned char D_001CA578;
extern int D_001CA57C;
extern char D_001E4318[];

extern long long func_09E0A0(void);
extern void func_09CD40(int a, unsigned int b, int c, int d, int e, int f);
extern int func_09CD78(int a);
extern int func_0ABB60(unsigned char value);
extern int func_09CB18(int index);
extern void func_0ABB90(unsigned int value);
extern void func_09E118(int value);
extern void func_09E140(int value);
extern void func_09E2E0(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_09E158(void)
{
    if (func_09E0A0() != 0) {
        func_09CD40(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0ABB60(3);
        func_0ABB90((unsigned char)func_09CB18(6));
        if (func_09CD78(6) != 0) {
            switch (D_001CA570) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001CA570 = 1;
                    D_001CA578 = 0;
                    D_001CA57C = 0x1B;
                }
                break;
            case 1:
                func_0ABB60(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_09E140, 0);
                if (D_001CA578 != 0) {
                    D_001CA570 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_09E2E0(D_001CA56C, D_001CA568);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_09E118(0);
                    D_001CA578 = 0;
                } else {
                    D_001CA57C = D_001CA57C - 1;
                    if (D_001CA57C == 0) {
                        func_09E118(1);
                        printf(D_001E4318);
                    }
                }
                break;
            }
        }
    }
}

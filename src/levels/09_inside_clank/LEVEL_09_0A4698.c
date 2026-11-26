/* LEVEL_09:0x0A4698 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001E0F68;
extern int D_001E0F6C;
extern unsigned int D_001E0F70;
extern unsigned char D_001E0F78;
extern int D_001E0F7C;
extern char D_001FAD98[];

extern long long func_0A45E0(void);
extern void func_0A32B0(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0A32E8(int a);
extern int func_0B2030(unsigned char value);
extern int func_0A3088(int index);
extern void func_0B2060(unsigned int value);
extern void func_0A4658(int value);
extern void func_0A4680(int value);
extern void func_0A4820(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A4698(void)
{
    if (func_0A45E0() != 0) {
        func_0A32B0(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0B2030(3);
        func_0B2060((unsigned char)func_0A3088(6));
        if (func_0A32E8(6) != 0) {
            switch (D_001E0F70) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001E0F70 = 1;
                    D_001E0F78 = 0;
                    D_001E0F7C = 0x1B;
                }
                break;
            case 1:
                func_0B2030(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A4680, 0);
                if (D_001E0F78 != 0) {
                    D_001E0F70 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A4820(D_001E0F6C, D_001E0F68);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A4658(0);
                    D_001E0F78 = 0;
                } else {
                    D_001E0F7C = D_001E0F7C - 1;
                    if (D_001E0F7C == 0) {
                        func_0A4658(1);
                        printf(D_001FAD98);
                    }
                }
                break;
            }
        }
    }
}

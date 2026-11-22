/* LEVEL_24:0x0A0C60 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001C7DE8;
extern int D_001C7DEC;
extern unsigned int D_001C7DF0;
extern unsigned char D_001C7DF8;
extern int D_001C7DFC;
extern char D_001E1F18[];

extern int func_0A0BA8(void);
extern void func_09F878(int a, unsigned int b, int c, int d, int e, int f);
extern int func_09F8B0(int a);
extern int func_0AE5F8(unsigned char value);
extern int func_09F650(int index);
extern void func_0AE628(unsigned int value);
extern void func_0A0C20(int value);
extern void func_0A0C48(int value);
extern void func_0A0DE8(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0A0C60(void)
{
    if (func_0A0BA8() != 0) {
        func_09F878(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0AE5F8(3);
        func_0AE628((unsigned char)func_09F650(6));
        if (func_09F8B0(6) != 0) {
            switch (D_001C7DF0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001C7DF0 = 1;
                    D_001C7DF8 = 0;
                    D_001C7DFC = 0x1B;
                }
                break;
            case 1:
                func_0AE5F8(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0A0C48, 0);
                if (D_001C7DF8 != 0) {
                    D_001C7DF0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0A0DE8(D_001C7DEC, D_001C7DE8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0A0C20(0);
                    D_001C7DF8 = 0;
                } else {
                    D_001C7DFC = D_001C7DFC - 1;
                    if (D_001C7DFC == 0) {
                        func_0A0C20(1);
                        printf(D_001E1F18);
                    }
                }
                break;
            }
        }
    }
}

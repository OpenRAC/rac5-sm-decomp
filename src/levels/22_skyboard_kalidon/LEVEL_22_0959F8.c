/* LEVEL_22:0x0959F8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_001564E8;
extern int D_001564EC;
extern unsigned int D_001564F0;
extern unsigned char D_001564F8;
extern int D_001564FC;
extern char D_0016E618[];

extern int func_095940(void);
extern void func_0945E0(int a, unsigned int b, int c, int d, int e, int f);
extern int func_094618(int a);
extern int func_0A3378(unsigned char value);
extern int func_0943B8(int index);
extern void func_0A33A8(unsigned int value);
extern void func_0959B8(int value);
extern void func_0959E0(int value);
extern void func_095B80(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0959F8(void)
{
    if (func_095940() != 0) {
        func_0945E0(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0A3378(3);
        func_0A33A8((unsigned char)func_0943B8(6));
        if (func_094618(6) != 0) {
            switch (D_001564F0) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_001564F0 = 1;
                    D_001564F8 = 0;
                    D_001564FC = 0x1B;
                }
                break;
            case 1:
                func_0A3378(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0959E0, 0);
                if (D_001564F8 != 0) {
                    D_001564F0 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_095B80(D_001564EC, D_001564E8);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0959B8(0);
                    D_001564F8 = 0;
                } else {
                    D_001564FC = D_001564FC - 1;
                    if (D_001564FC == 0) {
                        func_0959B8(1);
                        printf(D_0016E618);
                    }
                }
                break;
            }
        }
    }
}

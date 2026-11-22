/* LEVEL_20:0x0803B8 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_00107818;
extern int D_0010781C;
extern unsigned int D_00107820;
extern unsigned char D_00107828;
extern int D_0010782C;
extern char D_00126F48[];

extern int func_080300(void);
extern void func_07F860(int a, unsigned int b, int c, int d, int e, int f);
extern int func_07F898(int a);
extern int func_08E2D8(unsigned char value);
extern int func_07F610(int index);
extern void func_08E308(unsigned int value);
extern void func_080378(int value);
extern void func_0803A0(int value);
extern void func_080540(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0803B8(void)
{
    if (func_080300() != 0) {
        func_07F860(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_08E2D8(3);
        func_08E308((unsigned char)func_07F610(6));
        if (func_07F898(6) != 0) {
            switch (D_00107820) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_00107820 = 1;
                    D_00107828 = 0;
                    D_0010782C = 0x1B;
                }
                break;
            case 1:
                func_08E2D8(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0803A0, 0);
                if (D_00107828 != 0) {
                    D_00107820 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_080540(D_0010781C, D_00107818);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_080378(0);
                    D_00107828 = 0;
                } else {
                    D_0010782C = D_0010782C - 1;
                    if (D_0010782C == 0) {
                        func_080378(1);
                        printf(D_00126F48);
                    }
                }
                break;
            }
        }
    }
}

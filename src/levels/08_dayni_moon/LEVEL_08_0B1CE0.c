/* LEVEL_08:0x0B1CE0 -- placement copy of LEVEL_01_0A73E8.c: pause state machine: when the shell is ready sets up the pause screen, then per state pauses positional sounds and ATRAC streams, waits for the CD stream callback, and finally restores the sound state (or reports a timeout after the countdown). */
extern int D_00240028;
extern int D_0024002C;
extern unsigned int D_00240030;
extern unsigned char D_00240038;
extern int D_0024003C;
extern char D_0025AE18[];

extern long long func_0B1C28(void);
extern void func_0B08F8(int a, unsigned int b, int c, int d, int e, int f);
extern int func_0B0930(int a);
extern int func_0BFB58(unsigned char value);
extern int func_0B06D0(int index);
extern void func_0BFB88(unsigned int value);
extern void func_0B1CA0(int value);
extern void func_0B1CC8(int value);
extern void func_0B1E68(int a, int b);
extern void SND_PausePositionalSounds__Fb(int a);
extern int SND_PauseAtrac__Fbi(int a, int b);
extern int SND_IsAllAtracPaused__Fv(void);
extern void snd_StreamSafeCheckCDIdle_CB(int a, void (*cb)(int), int b);
extern int printf(const char *fmt, ...);

void func_0B1CE0(void)
{
    if (func_0B1C28() != 0) {
        func_0B08F8(6, 0xE0000000, 0x10, 0x10, 3, 1);
        func_0BFB58(3);
        func_0BFB88((unsigned char)func_0B06D0(6));
        if (func_0B0930(6) != 0) {
            switch (D_00240030) {
            case 0:
                SND_PausePositionalSounds__Fb(1);
                if (SND_PauseAtrac__Fbi(1, 0) != 0) {
                    D_00240030 = 1;
                    D_00240038 = 0;
                    D_0024003C = 0x1B;
                }
                break;
            case 1:
                func_0BFB58(3);
                snd_StreamSafeCheckCDIdle_CB(0, func_0B1CC8, 0);
                if (D_00240038 != 0) {
                    D_00240030 = 2;
                    snd_StreamSafeCheckCDIdle_CB(0, 0, 0);
                }
                break;
            case 2:
                if (SND_IsAllAtracPaused__Fv() != 0) {
                    func_0B1E68(D_0024002C, D_00240028);
                    SND_PausePositionalSounds__Fb(0);
                    SND_PauseAtrac__Fbi(0, 0);
                    func_0B1CA0(0);
                    D_00240038 = 0;
                } else {
                    D_0024003C = D_0024003C - 1;
                    if (D_0024003C == 0) {
                        func_0B1CA0(1);
                        printf(D_0025AE18);
                    }
                }
                break;
            }
        }
    }
}

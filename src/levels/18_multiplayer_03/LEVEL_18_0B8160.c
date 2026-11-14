/* LEVEL_18:0x0B8160 -- placement copy of LEVEL_01_0C9DC0.c: when the mode global is 1 starts the request, then if the status is 1 or the second check reports not done, resets the two helpers and plays sound 4. */
extern int D_001B057C;
extern int D_001B0578;
extern int D_001B0574;
extern void func_0C5620(int a0, int a1, int a2, int a3);
extern unsigned int func_0C5128(void);
extern unsigned int func_0C5138(void);
extern int func_0A40A8(int index);
extern void func_0C5400(int a0);
extern void func_0181E0(int a0, int a1);

void func_0B8160(void)
{
    unsigned int status;

    status = 0;
    if (D_001B057C == 1) {
        func_0C5620(1, D_001B0574, D_001B0578, 0);
        status = func_0C5128();
    }
    if (status == 1 || func_0C5138() == 0) {
        func_0A40A8(0);
        func_0C5400(0);
        func_0181E0(4, 0);
    }
}

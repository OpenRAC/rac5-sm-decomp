/* LEVEL_05:0x018D38 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001FAE28[];
extern struct Q *D_0021D0A8;
extern int D_001E3338;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_10BBD8(char *p);
extern void func_012A90(int a, int b, int c);
extern void func_0282D0(void);
extern void func_018E78(void);
extern void func_028D20(void);
extern int func_018F08(void);
extern void func_10BAE0(void);
extern void func_028D28(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_019B28(void);
extern void func_0196A0(void);
extern int func_028C28(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_018D38(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_10BBD8(D_001FAE28);
    func_012A90(a, b, 0);
    func_0282D0();
    func_018E78();
    func_028D20();
    if (flag == 1) {
        flag = func_018F08();
    }
    func_10BAE0();
    func_028D28();
    if (flag != 0) {
        SND_LevelInit();
        while (D_0021D0A8->f_04 == -1) {
            D_001E3338++;
            func_019B28();
        }
    } else {
        D_0021D0A8->f_04 = 0;
    }
    if (flag != 0) {
        func_0196A0();
    }
    MCPI_SendNewLevel(func_028C28());
    return 0;
}

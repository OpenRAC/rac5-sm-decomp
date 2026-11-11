/* LEVEL_08:0x01A0E8 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_00255BA8[];
extern struct Q *D_00280628;
extern int D_0023CB38;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_11FF38(char *p);
extern void func_012AF8(int a, int b, int c);
extern void func_029BD0(void);
extern void func_01A228(void);
extern void func_02A620(void);
extern int func_01A2B8(void);
extern void func_11FE40(void);
extern void func_02A628(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01AF08(void);
extern void func_01AA50(void);
extern int func_02A528(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_01A0E8(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_11FF38(D_00255BA8);
    func_012AF8(a, b, 0);
    func_029BD0();
    func_01A228();
    func_02A620();
    if (flag == 1) {
        flag = func_01A2B8();
    }
    func_11FE40();
    func_02A628();
    if (flag != 0) {
        SND_LevelInit();
        while (D_00280628->f_04 == -1) {
            D_0023CB38++;
            func_01AF08();
        }
    } else {
        D_00280628->f_04 = 0;
    }
    if (flag != 0) {
        func_01AA50();
    }
    MCPI_SendNewLevel(func_02A528());
    return 0;
}

/* LEVEL_03:0x019508 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_00224E28[];
extern struct Q *D_0024C228;
extern int D_0020C638;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_10D460(char *p);
extern void func_012AB0(int a, int b, int c);
extern void func_029450(void);
extern void func_019648(void);
extern void func_029EA0(void);
extern int func_0196D8(void);
extern void func_10D368(void);
extern void func_029EA8(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01A2F8(void);
extern void func_019E70(void);
extern int func_029DA8(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_019508(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_10D460(D_00224E28);
    func_012AB0(a, b, 0);
    func_029450();
    func_019648();
    func_029EA0();
    if (flag == 1) {
        flag = func_0196D8();
    }
    func_10D368();
    func_029EA8();
    if (flag != 0) {
        SND_LevelInit();
        while (D_0024C228->f_04 == -1) {
            D_0020C638++;
            func_01A2F8();
        }
    } else {
        D_0024C228->f_04 = 0;
    }
    if (flag != 0) {
        func_019E70();
    }
    MCPI_SendNewLevel(func_029DA8());
    return 0;
}

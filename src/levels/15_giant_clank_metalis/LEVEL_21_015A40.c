/* LEVEL_21:0x015A40 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001606A8[];
extern struct Q *D_00179528;
extern int D_00148C38;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0D4FD8(char *p);
extern void func_012120(int a, int b, int c);
extern void func_022E30(void);
extern void func_015B80(void);
extern void func_023880(void);
extern int func_015C10(void);
extern void func_0D4F20(void);
extern void func_023888(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_016778(void);
extern void func_0163A8(void);
extern int func_023788(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_015A40(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_0D4FD8(D_001606A8);
    func_012120(a, b, 0);
    func_022E30();
    func_015B80();
    func_023880();
    if (flag == 1) {
        flag = func_015C10();
    }
    func_0D4F20();
    func_023888();
    if (flag != 0) {
        SND_LevelInit();
        while (D_00179528->f_04 == -1) {
            D_00148C38++;
            func_016778();
        }
    } else {
        D_00179528->f_04 = 0;
    }
    if (flag != 0) {
        func_0163A8();
    }
    MCPI_SendNewLevel(func_023788());
    return 0;
}

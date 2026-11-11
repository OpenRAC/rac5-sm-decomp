/* LEVEL_04:0x0193D0 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_002258A8[];
extern struct Q *D_0024BBA8;
extern int D_0020D138;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_11AD00(char *p);
extern void func_0128A8(int a, int b, int c);
extern void func_029100(void);
extern void func_019510(void);
extern void func_029B50(void);
extern int func_0195A0(void);
extern void func_11AC08(void);
extern void func_029B58(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01A210(void);
extern void func_019D38(void);
extern int func_029A58(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_0193D0(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_11AD00(D_002258A8);
    func_0128A8(a, b, 0);
    func_029100();
    func_019510();
    func_029B50();
    if (flag == 1) {
        flag = func_0195A0();
    }
    func_11AC08();
    func_029B58();
    if (flag != 0) {
        SND_LevelInit();
        while (D_0024BBA8->f_04 == -1) {
            D_0020D138++;
            func_01A210();
        }
    } else {
        D_0024BBA8->f_04 = 0;
    }
    if (flag != 0) {
        func_019D38();
    }
    MCPI_SendNewLevel(func_029A58());
    return 0;
}

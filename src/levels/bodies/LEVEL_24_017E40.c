/* LEVEL_24:0x017E40 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001DCCA8[];
extern struct Q *D_001FD2A8;
extern int D_001C4C38;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_106798(char *p);
extern void func_0126F8(int a, int b, int c);
extern void func_026B98(void);
extern void func_017F80(void);
extern void func_0275E8(void);
extern int func_018010(void);
extern void func_1066E0(void);
extern void func_0275F0(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_018B80(void);
extern void func_0187A8(void);
extern int func_0274F0(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_017E40(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_106798(D_001DCCA8);
    func_0126F8(a, b, 0);
    func_026B98();
    func_017F80();
    func_0275E8();
    if (flag == 1) {
        flag = func_018010();
    }
    func_1066E0();
    func_0275F0();
    if (flag != 0) {
        SND_LevelInit();
        while (D_001FD2A8->f_04 == -1) {
            D_001C4C38++;
            func_018B80();
        }
    } else {
        D_001FD2A8->f_04 = 0;
    }
    if (flag != 0) {
        func_0187A8();
    }
    MCPI_SendNewLevel(func_0274F0());
    return 0;
}

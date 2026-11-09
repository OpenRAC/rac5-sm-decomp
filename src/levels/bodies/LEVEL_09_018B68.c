/* LEVEL_09:0x018B68 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001F5B28[];
extern struct Q *D_00218B28;
extern int D_001DDDB8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_108B88(char *p);
extern void func_012A90(int a, int b, int c);
extern void func_0284C0(void);
extern void func_018CA8(void);
extern void func_028F10(void);
extern int func_018D38(void);
extern void func_108A90(void);
extern void func_028F18(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_019980(void);
extern void func_0194D0(void);
extern int func_028E18(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_018B68(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_108B88(D_001F5B28);
    func_012A90(a, b, 0);
    func_0284C0();
    func_018CA8();
    func_028F10();
    if (flag == 1) {
        flag = func_018D38();
    }
    func_108A90();
    func_028F18();
    if (flag != 0) {
        SND_LevelInit();
        while (D_00218B28->f_04 == -1) {
            D_001DDDB8++;
            func_019980();
        }
    } else {
        D_00218B28->f_04 = 0;
    }
    if (flag != 0) {
        func_0194D0();
    }
    MCPI_SendNewLevel(func_028E18());
    return 0;
}

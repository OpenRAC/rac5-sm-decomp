/* LEVEL_10:0x018D90 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_00214EA8[];
extern struct Q *D_0023A7A8;
extern int D_001FCFB8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_10D9B0(char *p);
extern void func_012838(int a, int b, int c);
extern void func_029430(void);
extern void func_018ED0(void);
extern void func_029E80(void);
extern int func_018F60(void);
extern void func_10D8B8(void);
extern void func_029E88(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_019C10(void);
extern void func_0196F8(void);
extern int func_029D88(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_018D90(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_10D9B0(D_00214EA8);
    func_012838(a, b, 0);
    func_029430();
    func_018ED0();
    func_029E80();
    if (flag == 1) {
        flag = func_018F60();
    }
    func_10D8B8();
    func_029E88();
    if (flag != 0) {
        SND_LevelInit();
        while (D_0023A7A8->f_04 == -1) {
            D_001FCFB8++;
            func_019C10();
        }
    } else {
        D_0023A7A8->f_04 = 0;
    }
    if (flag != 0) {
        func_0196F8();
    }
    MCPI_SendNewLevel(func_029D88());
    return 0;
}

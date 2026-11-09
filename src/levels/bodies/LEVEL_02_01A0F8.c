/* LEVEL_02:0x01A0F8 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_00220EA8[];
extern struct Q *D_002488A8;
extern int D_00208C38;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_115AE0(char *p);
extern void func_012A78(int a, int b, int c);
extern void func_029E20(void);
extern void func_01A238(void);
extern void func_02A870(void);
extern int func_01A2C8(void);
extern void func_1159E8(void);
extern void func_02A878(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01AEF0(void);
extern void func_01AA60(void);
extern int func_02A778(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_01A0F8(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_115AE0(D_00220EA8);
    func_012A78(a, b, 0);
    func_029E20();
    func_01A238();
    func_02A870();
    if (flag == 1) {
        flag = func_01A2C8();
    }
    func_1159E8();
    func_02A878();
    if (flag != 0) {
        SND_LevelInit();
        while (D_002488A8->f_04 == -1) {
            D_00208C38++;
            func_01AEF0();
        }
    } else {
        D_002488A8->f_04 = 0;
    }
    if (flag != 0) {
        func_01AA60();
    }
    MCPI_SendNewLevel(func_02A778());
    return 0;
}

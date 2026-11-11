/* LEVEL_01:0x0196F8 -- runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_0020BF28[];
extern struct Q *D_002313A8;
extern int D_001F3FB8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_10F798(char *p);
extern void func_012A90(int a, int b, int c);
extern void func_029658(void);
extern void func_019838(void);
extern void func_02A0A8(void);
extern int func_0198C8(void);
extern void func_10F6A0(void);
extern void func_02A0B0(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01A590(void);
extern void func_01A060(void);
extern int func_029FB0(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_0196F8(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_10F798(D_0020BF28);
    func_012A90(a, b, 0);
    func_029658();
    func_019838();
    func_02A0A8();
    if (flag == 1) {
        flag = func_0198C8();
    }
    func_10F6A0();
    func_02A0B0();
    if (flag != 0) {
        SND_LevelInit();
        while (D_002313A8->f_04 == -1) {
            D_001F3FB8++;
            func_01A590();
        }
    } else {
        D_002313A8->f_04 = 0;
    }
    if (flag != 0) {
        func_01A060();
    }
    MCPI_SendNewLevel(func_029FB0());
    return 0;
}

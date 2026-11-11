/* LEVEL_06:0x017FA8 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001FADA8[];
extern struct Q *D_0021E128;
extern int D_001E2EB8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_105D68(char *p);
extern void func_012A78(int a, int b, int c);
extern void func_027A40(void);
extern void func_0180E8(void);
extern void func_028490(void);
extern int func_018178(void);
extern void func_105C70(void);
extern void func_028498(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_018D90(void);
extern void func_018910(void);
extern int func_028398(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_017FA8(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_105D68(D_001FADA8);
    func_012A78(a, b, 0);
    func_027A40();
    func_0180E8();
    func_028490();
    if (flag == 1) {
        flag = func_018178();
    }
    func_105C70();
    func_028498();
    if (flag != 0) {
        SND_LevelInit();
        while (D_0021E128->f_04 == -1) {
            D_001E2EB8++;
            func_018D90();
        }
    } else {
        D_0021E128->f_04 = 0;
    }
    if (flag != 0) {
        func_018910();
    }
    MCPI_SendNewLevel(func_028398());
    return 0;
}

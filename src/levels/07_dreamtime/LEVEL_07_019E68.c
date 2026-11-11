/* LEVEL_07:0x019E68 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_00220C28[];
extern struct Q *D_00246CA8;
extern int D_002082B8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_1127E8(char *p);
extern void func_012A90(int a, int b, int c);
extern void func_029998(void);
extern void func_019FA8(void);
extern void func_02A3E8(void);
extern int func_01A038(void);
extern void func_1126F0(void);
extern void func_02A3F0(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_01AC50(void);
extern void func_01A7D0(void);
extern int func_02A2F0(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_019E68(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_1127E8(D_00220C28);
    func_012A90(a, b, 0);
    func_029998();
    func_019FA8();
    func_02A3E8();
    if (flag == 1) {
        flag = func_01A038();
    }
    func_1126F0();
    func_02A3F0();
    if (flag != 0) {
        SND_LevelInit();
        while (D_00246CA8->f_04 == -1) {
            D_002082B8++;
            func_01AC50();
        }
    } else {
        D_00246CA8->f_04 = 0;
    }
    if (flag != 0) {
        func_01A7D0();
    }
    MCPI_SendNewLevel(func_02A2F0());
    return 0;
}

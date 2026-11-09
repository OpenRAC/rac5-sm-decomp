/* LEVEL_22:0x015E68 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001693A8[];
extern struct Q *D_00182FA8;
extern int D_00153338;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0EB500(char *p);
extern void func_012348(int a, int b, int c);
extern void func_023BF0(void);
extern void func_015FA8(void);
extern void func_024640(void);
extern int func_016038(void);
extern void func_0EB448(void);
extern void func_024648(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_016BA8(void);
extern void func_0167D0(void);
extern int func_024548(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_015E68(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_0EB500(D_001693A8);
    func_012348(a, b, 0);
    func_023BF0();
    func_015FA8();
    func_024640();
    if (flag == 1) {
        flag = func_016038();
    }
    func_0EB448();
    func_024648();
    if (flag != 0) {
        SND_LevelInit();
        while (D_00182FA8->f_04 == -1) {
            D_00153338++;
            func_016BA8();
        }
    } else {
        D_00182FA8->f_04 = 0;
    }
    if (flag != 0) {
        func_0167D0();
    }
    MCPI_SendNewLevel(func_024548());
    return 0;
}

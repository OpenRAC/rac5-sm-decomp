/* LEVEL_23:0x018360 -- placement copy of LEVEL_01_0196F8.c: runs the level start-up sequence, optionally reloading, waits for the level handshake and reports the new level. */

struct Q {
    int pad_00;
    int f_04;
};

extern char D_001DF0A8[];
extern struct Q *D_001FE828;
extern int D_001C73B8;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_101FC0(char *p);
extern void func_012A88(int a, int b, int c);
extern void func_0271C8(void);
extern void func_0184A0(void);
extern void func_027C18(void);
extern int func_018530(void);
extern void func_101F08(void);
extern void func_027C20(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_0190A0(void);
extern void func_018CC8(void);
extern int func_027B20(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_018360(int a, int b)
{
    int flag;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    func_101FC0(D_001DF0A8);
    func_012A88(a, b, 0);
    func_0271C8();
    func_0184A0();
    func_027C18();
    if (flag == 1) {
        flag = func_018530();
    }
    func_101F08();
    func_027C20();
    if (flag != 0) {
        SND_LevelInit();
        while (D_001FE828->f_04 == -1) {
            D_001C73B8++;
            func_0190A0();
        }
    } else {
        D_001FE828->f_04 = 0;
    }
    if (flag != 0) {
        func_018CC8();
    }
    MCPI_SendNewLevel(func_027B20());
    return 0;
}

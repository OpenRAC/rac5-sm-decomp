/* LEVEL_17:0x0173D8 -- placement copy of LEVEL_16_017A28.c: runs multiplayer level startup, waits for handshake, updates mode text, and sends the new level. */
typedef struct {
    int pad_00;
    int f_04;
    char pad_08[0x74 - 0x08];
    char str_74[0x100];
    char pad_174[0x17C - 0x174];
    unsigned char b_17C;
    char pad_17D[0x184 - 0x17D];
    int mode_184;
    int pad_188;
    int w_18C;
    int w_190;
} LevelInfo;

extern char D_001B4398[];
extern LevelInfo *D_001D13A8;
extern int D_001950E4;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0EF9C0(void);
extern int func_012478(int a, int b, int c);
extern void func_026A30(void);
extern void func_017680(void);
extern void func_027480(void);
extern int func_017220(void);
extern int func_017728(void);
extern void func_0EF8C8(void);
extern void func_027488(void);
extern int func_0172E0(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_018280(void);
extern int func_1125B0(void);
extern void func_112C10(void);
extern void func_017EA0(void);
extern char *func_10E8A8(int id);
extern void *func_0961D8(char *dst, char *src, int maxLen);
extern int func_027388(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_0173D8(int a, int b)
{
    int flag;
    int ctx;
    LevelInfo *info;
    int textId;

    flag = 0;
    if (func_000100() != 0) {
        flag = 1;
    }
    ChangeThreadPriority(GetThreadId(), 44);
    ((void (*)(char *p))func_0EF9C0)(D_001B4398);
    ctx = func_012478(a, b, 0);
    func_026A30();
    func_017680();
    func_027480();
    ((int (*)(int a))func_017220)(ctx);
    if (flag == 1) {
        flag = func_017728();
    }
    func_0EF8C8();
    func_027488();
    if (flag != 0) {
        ((int (*)(int a))func_0172E0)(ctx);
        func_0EF8C8();
        SND_LevelInit();
        while (D_001D13A8->f_04 == -1) {
            D_001950E4++;
            func_018280();
        }
    } else {
        D_001D13A8->f_04 = 0;
    }
    if (func_1125B0() != 0) {
        func_112C10();
    }
    if (D_001D13A8->f_04 == 0x14 || D_001D13A8->f_04 < 0x10) {
        D_001D13A8->b_17C = 0;
    }
    if (flag != 0) {
        func_017EA0();
    }
    info = D_001D13A8;
    textId = 0;
    if ((info->f_04 ^ 0x14) != 0) {
        switch (info->mode_184) {
        case 0:
            switch (info->f_04) {
            case 0x10:
                textId = 0x7AB;
                break;
            case 0x11:
                textId = 0x7AC;
                break;
            case 0x12:
                textId = 0x7AD;
                break;
            case 0x13:
                textId = 0x7AE;
                break;
            }
            break;
        case 1:
            if (info->w_18C != 0) {
                if (info->w_190 != 0) {
                    textId = 0x7B1;
                    break;
                }
            } else if (info->w_190 != 0) {
                textId = 0x7AF;
                break;
            }
            textId = 0x7B0;
            break;
        case 2:
            if (info->w_18C != 0) {
                if (info->w_190 != 0) {
                    textId = 0x7B4;
                    break;
                }
            } else if (info->w_190 != 0) {
                textId = 0x7B2;
                break;
            }
            textId = 0x7B3;
            break;
        }
    }
    if (textId == 0) {
        D_001D13A8->str_74[0] = 0;
    } else {
        func_0961D8(D_001D13A8->str_74, func_10E8A8(textId), 0x100);
    }
    MCPI_SendNewLevel(func_027388());
    return 0;
}

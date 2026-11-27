/* LEVEL_16:0x017A28 -- runs multiplayer level startup, waits for handshake, updates mode text, and sends the new level. */
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

extern char D_001C0F18[];
extern LevelInfo *D_001E00A8;
extern int D_001A1AE4;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0F03B0(void);
extern int func_012478(int a, int b, int c);
extern void func_0270B0(void);
extern void func_017CD0(void);
extern void func_027B00(void);
extern int func_017870(void);
extern int func_017D78(void);
extern void func_0F02B8(void);
extern void func_027B08(void);
extern int func_017930(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_018900(void);
extern int func_112E20(void);
extern void func_113480(void);
extern void func_0184F0(void);
extern char *func_10F330(int id);
extern void *func_096CE0(char *dst, char *src, int maxLen);
extern int func_027A08(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_017A28(int a, int b)
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
    ((void (*)(char *p))func_0F03B0)(D_001C0F18);
    ctx = func_012478(a, b, 0);
    func_0270B0();
    func_017CD0();
    func_027B00();
    ((int (*)(int a))func_017870)(ctx);
    if (flag == 1) {
        flag = func_017D78();
    }
    func_0F02B8();
    func_027B08();
    if (flag != 0) {
        ((int (*)(int a))func_017930)(ctx);
        func_0F02B8();
        SND_LevelInit();
        while (D_001E00A8->f_04 == -1) {
            D_001A1AE4++;
            func_018900();
        }
    } else {
        D_001E00A8->f_04 = 0;
    }
    if (func_112E20() != 0) {
        func_113480();
    }
    if (D_001E00A8->f_04 == 0x14 || D_001E00A8->f_04 < 0x10) {
        D_001E00A8->b_17C = 0;
    }
    if (flag != 0) {
        func_0184F0();
    }
    info = D_001E00A8;
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
        D_001E00A8->str_74[0] = 0;
    } else {
        func_096CE0(D_001E00A8->str_74, func_10F330(textId), 0x100);
    }
    MCPI_SendNewLevel(func_027A08());
    return 0;
}

/* LEVEL_19:0x017728 -- placement copy of LEVEL_16_017A28.c: runs multiplayer level startup, waits for handshake, updates mode text, and sends the new level. */
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

extern char D_001C2118[];
extern LevelInfo *D_001E0228;
extern int D_001A2C64;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0F09F8(void);
extern int func_012478(int a, int b, int c);
extern void func_026C58(void);
extern void func_0179D0(void);
extern void func_0276A8(void);
extern int func_017570(void);
extern int func_017A78(void);
extern void func_0F0900(void);
extern void func_0276B0(void);
extern int func_017630(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_018600(void);
extern int func_1135C8(void);
extern void func_113C28(void);
extern void func_0181F0(void);
extern char *func_10F9D0(int id);
extern void *func_096570(char *dst, char *src, int maxLen);
extern int func_0275B0(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_017728(int a, int b)
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
    ((void (*)(char *p))func_0F09F8)(D_001C2118);
    ctx = func_012478(a, b, 0);
    func_026C58();
    func_0179D0();
    func_0276A8();
    ((int (*)(int a))func_017570)(ctx);
    if (flag == 1) {
        flag = func_017A78();
    }
    func_0F0900();
    func_0276B0();
    if (flag != 0) {
        ((int (*)(int a))func_017630)(ctx);
        func_0F0900();
        SND_LevelInit();
        while (D_001E0228->f_04 == -1) {
            D_001A2C64++;
            func_018600();
        }
    } else {
        D_001E0228->f_04 = 0;
    }
    if (func_1135C8() != 0) {
        func_113C28();
    }
    if (D_001E0228->f_04 == 0x14 || D_001E0228->f_04 < 0x10) {
        D_001E0228->b_17C = 0;
    }
    if (flag != 0) {
        func_0181F0();
    }
    info = D_001E0228;
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
        D_001E0228->str_74[0] = 0;
    } else {
        func_096570(D_001E0228->str_74, func_10F9D0(textId), 0x100);
    }
    MCPI_SendNewLevel(func_0275B0());
    return 0;
}

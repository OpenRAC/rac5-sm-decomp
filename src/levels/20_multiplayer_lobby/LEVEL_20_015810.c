/* LEVEL_20:0x015810 -- placement copy of LEVEL_16_017A28.c: runs multiplayer level startup, waits for handshake, updates mode text, and sends the new level. */
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

extern char D_00121F98[];
extern LevelInfo *D_00137A28;
extern int D_001041C4;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0CA590(void);
extern int func_011EB0(int a, int b, int c);
extern void func_023BB8(void);
extern void func_015AB8(void);
extern void func_024608(void);
extern int func_015658(void);
extern int func_015B60(void);
extern void func_0CA4D8(void);
extern void func_024610(void);
extern int func_015718(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_0166B8(void);
extern int func_0E5990(void);
extern void func_0E5FF0(void);
extern void func_0162D8(void);
extern char *func_0E2118(int id);
extern void *func_0813D8(char *dst, char *src, int maxLen);
extern int func_024510(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_015810(int a, int b)
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
    ((void (*)(char *p))func_0CA590)(D_00121F98);
    ctx = func_011EB0(a, b, 0);
    func_023BB8();
    func_015AB8();
    func_024608();
    ((int (*)(int a))func_015658)(ctx);
    if (flag == 1) {
        flag = func_015B60();
    }
    func_0CA4D8();
    func_024610();
    if (flag != 0) {
        ((int (*)(int a))func_015718)(ctx);
        func_0CA4D8();
        SND_LevelInit();
        while (D_00137A28->f_04 == -1) {
            D_001041C4++;
            func_0166B8();
        }
    } else {
        D_00137A28->f_04 = 0;
    }
    if (func_0E5990() != 0) {
        func_0E5FF0();
    }
    if (D_00137A28->f_04 == 0x14 || D_00137A28->f_04 < 0x10) {
        D_00137A28->b_17C = 0;
    }
    if (flag != 0) {
        func_0162D8();
    }
    info = D_00137A28;
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
        D_00137A28->str_74[0] = 0;
    } else {
        func_0813D8(D_00137A28->str_74, func_0E2118(textId), 0x100);
    }
    MCPI_SendNewLevel(func_024510());
    return 0;
}

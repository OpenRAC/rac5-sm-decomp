/* LEVEL_18:0x017078 -- placement copy of LEVEL_16_017A28.c: runs multiplayer level startup, waits for handshake, updates mode text, and sends the new level. */
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

extern char D_001C2498[];
extern LevelInfo *D_001E0428;
extern int D_001A2F64;

extern int func_000100(void);
extern int GetThreadId(void);
extern int ChangeThreadPriority(int tid, int prio);
extern void func_0EEBE8(void);
extern int func_0124E8(int a, int b, int c);
extern void func_026660(void);
extern void func_017320(void);
extern void func_0270B0(void);
extern int func_016EC0(void);
extern int func_0173C8(void);
extern void func_0EEAF0(void);
extern void func_0270B8(void);
extern int func_016F80(void);
extern void SND_LevelInit(void) __asm__("SND_LevelInit__Fv");
extern int func_017F48(void);
extern int func_111BD8(void);
extern void func_112238(void);
extern void func_017B40(void);
extern char *func_10DFE0(int id);
extern void *func_095CF0(char *dst, char *src, int maxLen);
extern int func_026FB8(void);
extern void MCPI_SendNewLevel(int a) __asm__("MCPI_SendNewLevel__Fi");

int func_017078(int a, int b)
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
    ((void (*)(char *p))func_0EEBE8)(D_001C2498);
    ctx = func_0124E8(a, b, 0);
    func_026660();
    func_017320();
    func_0270B0();
    ((int (*)(int a))func_016EC0)(ctx);
    if (flag == 1) {
        flag = func_0173C8();
    }
    func_0EEAF0();
    func_0270B8();
    if (flag != 0) {
        ((int (*)(int a))func_016F80)(ctx);
        func_0EEAF0();
        SND_LevelInit();
        while (D_001E0428->f_04 == -1) {
            D_001A2F64++;
            func_017F48();
        }
    } else {
        D_001E0428->f_04 = 0;
    }
    if (func_111BD8() != 0) {
        func_112238();
    }
    if (D_001E0428->f_04 == 0x14 || D_001E0428->f_04 < 0x10) {
        D_001E0428->b_17C = 0;
    }
    if (flag != 0) {
        func_017B40();
    }
    info = D_001E0428;
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
        D_001E0428->str_74[0] = 0;
    } else {
        func_095CF0(D_001E0428->str_74, func_10DFE0(textId), 0x100);
    }
    MCPI_SendNewLevel(func_026FB8());
    return 0;
}

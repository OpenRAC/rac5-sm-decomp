/* LEVEL_06:0x019810 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_00221EC0;
extern int D_001DE318;
extern int D_001DE324;
extern unsigned char D_001DE30A;
extern unsigned char D_001DE30B;
extern unsigned char D_001DE30C;
extern unsigned char D_001DE30D;
extern unsigned char D_001DE309;
extern unsigned char D_001E52D8;
extern int D_001E52DC;
extern char D_002273F0[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_087FC0(int);
extern void func_077918(int);
extern void func_001000(int);
extern void func_0906F8(int, int, int, int);
extern void func_092338(int);
extern int func_016B00(void);
extern void func_08CAF8(int);
extern void func_08D620(void);
extern void func_093278(int);
extern void func_0932D0(int, int, int);
extern void func_09C8E0(int, int);
extern void func_0167B8(void);
extern char *func_0011C8(void);
extern void func_07CF48(char *, int);
extern void func_07BEB8(char *, int, float *, int);
extern void func_078BF0(void);
extern void func_0891B8(int, int);
extern void func_07D378(void);
extern void func_09A288(void);
extern void func_032440(void);
extern void func_078948(void);
extern void func_016908(void);
extern void func_078C60(void);
extern void func_032460(void);
extern void func_0323D8(void);
extern void func_08A020(void);
extern void func_0880B8(char *, int);
extern void func_09CD28(int);
extern void func_079D10(Vec3 *, float);
extern void func_08D978(int, float);
extern void func_0780A8(int);
extern void func_0AA8A0(void);

void func_019810(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001DE318 = frame;
    func_087FC0(frame & 0xFF);
    if (D_001DE30D) {
        func_077918(1);
        func_001000(frame);
        func_0906F8(0, 0x1D, frame, 0);
        func_092338(frame);
    }
    D_001DE324 = func_016B00();
    D_001E52D8 = 0;
    func_08CAF8(D_001E52DC);
    if (D_001DE30C)
        func_08D620();
    FOG_Update(frame);
    func_093278(D_001DE318);
    func_0932D0(0, 1, frame);
    func_09C8E0(1, 2);
    func_0167B8();
    func_0932D0(2, 3, frame);
    if (D_001DE309) {
        p = func_0011C8();
        func_07CF48(p + 0x30, D_001DE324);
    }
    func_0932D0(4, 5, frame);
    player = &D_00221EC0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_07BEB8(p + 0x30, D_001DE324, v, 0);
    }
    func_0932D0(6, 7, frame);
    func_078BF0();
    func_001000(frame);
    if (D_001DE30A)
        func_0891B8(0, 1);
    func_07D378();
    func_09A288();
    func_032440();
    if (D_001DE30C)
        func_078948();
    func_0932D0(8, 9, frame);
    if (D_001DE30B)
        func_016908();
    func_078C60();
    if (D_001DE30A)
        func_0891B8(2, 3);
    p = func_0011C8();
    func_07BEB8(p + 0x30, D_001DE324, v, 1);
    func_032460();
    func_0323D8();
    if (D_001DE30C)
        func_078948();
    if (D_001DE30A)
        func_08A020();
    func_0880B8(D_002273F0, frame & 0xFF);
    func_09CD28(0);
    if (D_001DE30C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_079D10(&tmp, 36.0f);
        }
    }
    func_0932D0(0xA, 0xB, frame);
    func_08D978(frame, 0.033333335f);
    func_0932D0(0xD, 0xE, frame);
    func_0932D0(0xF, 0x13, frame);
    func_0932D0(0x14, 0x17, frame);
    func_0932D0(0x18, 0x1B, frame);
    func_0780A8(4);
    func_0932D0(0x1C, 0x1D, frame);
    func_09C8E0(0, 2);
    func_0AA8A0();
}

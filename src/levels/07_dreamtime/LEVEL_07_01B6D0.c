/* LEVEL_07:0x01B6D0 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0024AA40;
extern int D_00203718;
extern int D_00203724;
extern unsigned char D_0020370A;
extern unsigned char D_0020370B;
extern unsigned char D_0020370C;
extern unsigned char D_0020370D;
extern unsigned char D_00203709;
extern unsigned char D_0020A6D8;
extern int D_0020A6DC;
extern char D_0024FF70[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_0911F8(int);
extern void func_07FEA0(int);
extern void func_001000(int);
extern void func_0999C8(int, int, int, int);
extern void func_09B608(int);
extern int func_0189C0(void);
extern void func_095D30(int);
extern void func_096858(void);
extern void func_09C548(int);
extern void func_09C5A0(int, int, int);
extern void func_0A4110(int, int);
extern void func_018678(void);
extern char *func_0011C8(void);
extern void func_085F30(char *, int);
extern void func_084EF8(char *, int, float *, int);
extern void func_081178(void);
extern void func_0923F0(int, int);
extern void func_086360(void);
extern void func_0A1A90(void);
extern void func_035F20(void);
extern void func_080ED0(void);
extern void func_0187C8(void);
extern void func_0811E8(void);
extern void func_035F40(void);
extern void func_035EB8(void);
extern void func_093258(void);
extern void func_0912F0(char *, int);
extern void func_0A4558(int);
extern void func_082298(Vec3 *, float);
extern void func_096BB0(int, float);
extern void func_080630(int);
extern void func_0B20D0(void);

void func_01B6D0(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00203718 = frame;
    func_0911F8(frame & 0xFF);
    if (D_0020370D) {
        func_07FEA0(1);
        func_001000(frame);
        func_0999C8(0, 0x1D, frame, 0);
        func_09B608(frame);
    }
    D_00203724 = func_0189C0();
    D_0020A6D8 = 0;
    func_095D30(D_0020A6DC);
    if (D_0020370C)
        func_096858();
    FOG_Update(frame);
    func_09C548(D_00203718);
    func_09C5A0(0, 1, frame);
    func_0A4110(1, 2);
    func_018678();
    func_09C5A0(2, 3, frame);
    if (D_00203709) {
        p = func_0011C8();
        func_085F30(p + 0x30, D_00203724);
    }
    func_09C5A0(4, 5, frame);
    player = &D_0024AA40;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_084EF8(p + 0x30, D_00203724, v, 0);
    }
    func_09C5A0(6, 7, frame);
    func_081178();
    func_001000(frame);
    if (D_0020370A)
        func_0923F0(0, 1);
    func_086360();
    func_0A1A90();
    func_035F20();
    if (D_0020370C)
        func_080ED0();
    func_09C5A0(8, 9, frame);
    if (D_0020370B)
        func_0187C8();
    func_0811E8();
    if (D_0020370A)
        func_0923F0(2, 3);
    p = func_0011C8();
    func_084EF8(p + 0x30, D_00203724, v, 1);
    func_035F40();
    func_035EB8();
    if (D_0020370C)
        func_080ED0();
    if (D_0020370A)
        func_093258();
    func_0912F0(D_0024FF70, frame & 0xFF);
    func_0A4558(0);
    if (D_0020370C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_082298(&tmp, 36.0f);
        }
    }
    func_09C5A0(0xA, 0xB, frame);
    func_096BB0(frame, 0.033333335f);
    func_09C5A0(0xD, 0xE, frame);
    func_09C5A0(0xF, 0x13, frame);
    func_09C5A0(0x14, 0x17, frame);
    func_09C5A0(0x18, 0x1B, frame);
    func_080630(4);
    func_09C5A0(0x1C, 0x1D, frame);
    func_0A4110(0, 2);
    func_0B20D0();
}

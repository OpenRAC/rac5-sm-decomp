/* LEVEL_03:0x01AD78 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0024FFC0;
extern int D_00207A98;
extern int D_00207AA4;
extern unsigned char D_00207A8A;
extern unsigned char D_00207A8B;
extern unsigned char D_00207A8C;
extern unsigned char D_00207A8D;
extern unsigned char D_00207A89;
extern unsigned char D_0020EA58;
extern int D_0020EA5C;
extern char D_002554F0[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_08EFA0(int);
extern void func_07DB18(int);
extern void func_001000(int);
extern void func_097770(int, int, int, int);
extern void func_0993B0(int);
extern int func_018060(void);
extern void func_093AD8(int);
extern void func_094600(void);
extern void func_09A2F0(int);
extern void func_09A348(int, int, int);
extern void func_0A1E90(int, int);
extern void func_017D18(void);
extern char *func_0011F0(void);
extern void func_083CB8(char *, int);
extern void func_082C28(char *, int, float *, int);
extern void func_07EDF0(void);
extern void func_090198(int, int);
extern void func_0840E8(void);
extern void func_09F838(void);
extern void func_033C30(void);
extern void func_07EB48(void);
extern void func_017E68(void);
extern void func_07EE60(void);
extern void func_033C50(void);
extern void func_033BC8(void);
extern void func_091000(void);
extern void func_08F098(char *, int);
extern void func_0A22D8(int);
extern void func_07FF10(Vec3 *, float);
extern void func_094958(int, float);
extern void func_07E2A8(int);
extern void func_0AFE50(void);

void func_01AD78(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00207A98 = frame;
    func_08EFA0(frame & 0xFF);
    if (D_00207A8D) {
        func_07DB18(1);
        func_001000(frame);
        func_097770(0, 0x1D, frame, 0);
        func_0993B0(frame);
    }
    D_00207AA4 = func_018060();
    D_0020EA58 = 0;
    func_093AD8(D_0020EA5C);
    if (D_00207A8C)
        func_094600();
    FOG_Update(frame);
    func_09A2F0(D_00207A98);
    func_09A348(0, 1, frame);
    func_0A1E90(1, 2);
    func_017D18();
    func_09A348(2, 3, frame);
    if (D_00207A89) {
        p = func_0011F0();
        func_083CB8(p + 0x30, D_00207AA4);
    }
    func_09A348(4, 5, frame);
    player = &D_0024FFC0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011F0();
        func_082C28(p + 0x30, D_00207AA4, v, 0);
    }
    func_09A348(6, 7, frame);
    func_07EDF0();
    func_001000(frame);
    if (D_00207A8A)
        func_090198(0, 1);
    func_0840E8();
    func_09F838();
    func_033C30();
    if (D_00207A8C)
        func_07EB48();
    func_09A348(8, 9, frame);
    if (D_00207A8B)
        func_017E68();
    func_07EE60();
    if (D_00207A8A)
        func_090198(2, 3);
    p = func_0011F0();
    func_082C28(p + 0x30, D_00207AA4, v, 1);
    func_033C50();
    func_033BC8();
    if (D_00207A8C)
        func_07EB48();
    if (D_00207A8A)
        func_091000();
    func_08F098(D_002554F0, frame & 0xFF);
    func_0A22D8(0);
    if (D_00207A8C) {
        if (player->p59C != 0) {
            p = func_0011F0();
            tmp = *(Vec3 *)(p + 0x30);
            func_07FF10(&tmp, 36.0f);
        }
    }
    func_09A348(0xA, 0xB, frame);
    func_094958(frame, 0.033333335f);
    func_09A348(0xD, 0xE, frame);
    func_09A348(0xF, 0x13, frame);
    func_09A348(0x14, 0x17, frame);
    func_09A348(0x18, 0x1B, frame);
    func_07E2A8(4);
    func_09A348(0x1C, 0x1D, frame);
    func_0A1E90(0, 2);
    func_0AFE50();
}

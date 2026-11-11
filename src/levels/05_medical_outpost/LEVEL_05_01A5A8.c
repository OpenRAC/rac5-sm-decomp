/* LEVEL_05:0x01A5A8 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_00220E40;
extern int D_001DE798;
extern int D_001DE7A4;
extern unsigned char D_001DE78A;
extern unsigned char D_001DE78B;
extern unsigned char D_001DE78C;
extern unsigned char D_001DE78D;
extern unsigned char D_001DE789;
extern unsigned char D_001E5758;
extern int D_001E575C;
extern char D_00226530[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_08CA68(int);
extern void func_07B3D8(int);
extern void func_001000(int);
extern void func_095048(int, int, int, int);
extern void func_096C88(int);
extern int func_017920(void);
extern void func_0915A0(int);
extern void func_0920C8(void);
extern void func_097BC8(int);
extern void func_097C20(int, int, int);
extern void func_0A06D0(int, int);
extern void func_017600(void);
extern char *func_0011C8(void);
extern void func_081798(char *, int);
extern void func_080430(char *, int, float *, int);
extern void func_07C6B0(void);
extern void func_08DC60(int, int);
extern void func_081BC8(void);
extern void func_09E068(void);
extern void func_033700(void);
extern void func_07C408(void);
extern void func_017750(void);
extern void func_07C720(void);
extern void func_033720(void);
extern void func_033698(void);
extern void func_08EAC8(void);
extern void func_08CB60(char *, int);
extern void func_0A0B18(int);
extern void func_07D7D0(Vec3 *, float);
extern void func_092420(int, float);
extern void func_07BB68(int);
extern void func_0AE690(void);

void func_01A5A8(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001DE798 = frame;
    func_08CA68(frame & 0xFF);
    if (D_001DE78D) {
        func_07B3D8(1);
        func_001000(frame);
        func_095048(0, 0x1D, frame, 0);
        func_096C88(frame);
    }
    D_001DE7A4 = func_017920();
    D_001E5758 = 0;
    func_0915A0(D_001E575C);
    if (D_001DE78C)
        func_0920C8();
    FOG_Update(frame);
    func_097BC8(D_001DE798);
    func_097C20(0, 1, frame);
    func_0A06D0(1, 2);
    func_017600();
    func_097C20(2, 3, frame);
    if (D_001DE789) {
        p = func_0011C8();
        func_081798(p + 0x30, D_001DE7A4);
    }
    func_097C20(4, 5, frame);
    player = &D_00220E40;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_080430(p + 0x30, D_001DE7A4, v, 0);
    }
    func_097C20(6, 7, frame);
    func_07C6B0();
    func_001000(frame);
    if (D_001DE78A)
        func_08DC60(0, 1);
    func_081BC8();
    func_09E068();
    func_033700();
    if (D_001DE78C)
        func_07C408();
    func_097C20(8, 9, frame);
    if (D_001DE78B)
        func_017750();
    func_07C720();
    if (D_001DE78A)
        func_08DC60(2, 3);
    p = func_0011C8();
    func_080430(p + 0x30, D_001DE7A4, v, 1);
    func_033720();
    func_033698();
    if (D_001DE78C)
        func_07C408();
    if (D_001DE78A)
        func_08EAC8();
    func_08CB60(D_00226530, frame & 0xFF);
    func_0A0B18(0);
    if (D_001DE78C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_07D7D0(&tmp, 36.0f);
        }
    }
    func_097C20(0xA, 0xB, frame);
    func_092420(frame, 0.033333335f);
    func_097C20(0xD, 0xE, frame);
    func_097C20(0xF, 0x13, frame);
    func_097C20(0x14, 0x17, frame);
    func_097C20(0x18, 0x1B, frame);
    func_07BB68(4);
    func_097C20(0x1C, 0x1D, frame);
    func_0A06D0(0, 2);
    func_0AE690();
}

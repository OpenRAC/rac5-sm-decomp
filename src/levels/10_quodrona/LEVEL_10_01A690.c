/* LEVEL_10:0x01A690 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0023E540;
extern int D_001F8418;
extern int D_001F8424;
extern unsigned char D_001F840A;
extern unsigned char D_001F840B;
extern unsigned char D_001F840C;
extern unsigned char D_001F840D;
extern unsigned char D_001F8409;
extern unsigned char D_001FF3D8;
extern int D_001FF3DC;
extern char D_00243A70[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_08F6E0(int);
extern void func_07E368(int);
extern void func_000D90(int);
extern void func_097EB0(int, int, int, int);
extern void func_099AF0(int);
extern int func_017918(void);
extern void func_094218(int);
extern void func_094D40(void);
extern void func_09AA30(int);
extern void func_09AA88(int, int, int);
extern void func_0A3228(int, int);
extern void func_0175D0(void);
extern char *func_000F58(void);
extern void func_0843F8(char *, int);
extern void func_0833C0(char *, int, float *, int);
extern void func_07F640(void);
extern void func_0908D8(int, int);
extern void func_084828(void);
extern void func_0A0B90(void);
extern void func_034148(void);
extern void func_07F398(void);
extern void func_017720(void);
extern void func_07F6B0(void);
extern void func_034168(void);
extern void func_0340E0(void);
extern void func_091740(void);
extern void func_08F7D8(char *, int);
extern void func_0A3670(int);
extern void func_080760(Vec3 *, float);
extern void func_095098(int, float);
extern void func_07EAF8(int);
extern void func_0B11E8(void);

void func_01A690(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001F8418 = frame;
    func_08F6E0(frame & 0xFF);
    if (D_001F840D) {
        func_07E368(1);
        func_000D90(frame);
        func_097EB0(0, 0x1D, frame, 0);
        func_099AF0(frame);
    }
    D_001F8424 = func_017918();
    D_001FF3D8 = 0;
    func_094218(D_001FF3DC);
    if (D_001F840C)
        func_094D40();
    FOG_Update(frame);
    func_09AA30(D_001F8418);
    func_09AA88(0, 1, frame);
    func_0A3228(1, 2);
    func_0175D0();
    func_09AA88(2, 3, frame);
    if (D_001F8409) {
        p = func_000F58();
        func_0843F8(p + 0x30, D_001F8424);
    }
    func_09AA88(4, 5, frame);
    player = &D_0023E540;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_000F58();
        func_0833C0(p + 0x30, D_001F8424, v, 0);
    }
    func_09AA88(6, 7, frame);
    func_07F640();
    func_000D90(frame);
    if (D_001F840A)
        func_0908D8(0, 1);
    func_084828();
    func_0A0B90();
    func_034148();
    if (D_001F840C)
        func_07F398();
    func_09AA88(8, 9, frame);
    if (D_001F840B)
        func_017720();
    func_07F6B0();
    if (D_001F840A)
        func_0908D8(2, 3);
    p = func_000F58();
    func_0833C0(p + 0x30, D_001F8424, v, 1);
    func_034168();
    func_0340E0();
    if (D_001F840C)
        func_07F398();
    if (D_001F840A)
        func_091740();
    func_08F7D8(D_00243A70, frame & 0xFF);
    func_0A3670(0);
    if (D_001F840C) {
        if (player->p59C != 0) {
            p = func_000F58();
            tmp = *(Vec3 *)(p + 0x30);
            func_080760(&tmp, 36.0f);
        }
    }
    func_09AA88(0xA, 0xB, frame);
    func_095098(frame, 0.033333335f);
    func_09AA88(0xD, 0xE, frame);
    func_09AA88(0xF, 0x13, frame);
    func_09AA88(0x14, 0x17, frame);
    func_09AA88(0x18, 0x1B, frame);
    func_07EAF8(4);
    func_09AA88(0x1C, 0x1D, frame);
    func_0A3228(0, 2);
    func_0B11E8();
}

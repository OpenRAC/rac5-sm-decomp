/* LEVEL_22:0x017628 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_00186D40;
extern int D_0014E798;
extern int D_0014E7A4;
extern unsigned char D_0014E78A;
extern unsigned char D_0014E78B;
extern unsigned char D_0014E78C;
extern unsigned char D_0014E78D;
extern unsigned char D_0014E789;
extern unsigned char D_00155758;
extern int D_0015575C;
extern char D_0018C270[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_080140(int);
extern void func_070710(int);
extern void func_000E08(int);
extern void func_0886A8(int, int, int, int);
extern void func_08A2E8(int);
extern int func_014F70(void);
extern void func_084C78(int);
extern void func_0857A0(void);
extern void func_08B228(int);
extern void func_08B280(int, int, int);
extern void func_090720(int, int);
extern void func_014C58(void);
extern char *func_000F38(void);
extern void func_075BE0(char *, int);
extern void func_074BA8(char *, int, float *, int);
extern void func_0719E8(void);
extern void func_081338(int, int);
extern void func_076010(void);
extern void func_08E160(void);
extern void func_02BBE8(void);
extern void func_071740(void);
extern void func_014DA8(void);
extern void func_071A58(void);
extern void func_02BC08(void);
extern void func_02BB80(void);
extern void func_0821A0(void);
extern void func_080238(char *, int);
extern void func_090B68(int);
extern void func_072B08(Vec3 *, float);
extern void func_085AF8(int, float);
extern void func_070EA0(int);
extern void func_09E6E0(void);

void func_017628(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_0014E798 = frame;
    func_080140(frame & 0xFF);
    if (D_0014E78D) {
        func_070710(1);
        func_000E08(frame);
        func_0886A8(0, 0x1D, frame, 0);
        func_08A2E8(frame);
    }
    D_0014E7A4 = func_014F70();
    D_00155758 = 0;
    func_084C78(D_0015575C);
    if (D_0014E78C)
        func_0857A0();
    FOG_Update(frame);
    func_08B228(D_0014E798);
    func_08B280(0, 1, frame);
    func_090720(1, 2);
    func_014C58();
    func_08B280(2, 3, frame);
    if (D_0014E789) {
        p = func_000F38();
        func_075BE0(p + 0x30, D_0014E7A4);
    }
    func_08B280(4, 5, frame);
    player = &D_00186D40;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_000F38();
        func_074BA8(p + 0x30, D_0014E7A4, v, 0);
    }
    func_08B280(6, 7, frame);
    func_0719E8();
    func_000E08(frame);
    if (D_0014E78A)
        func_081338(0, 1);
    func_076010();
    func_08E160();
    func_02BBE8();
    if (D_0014E78C)
        func_071740();
    func_08B280(8, 9, frame);
    if (D_0014E78B)
        func_014DA8();
    func_071A58();
    if (D_0014E78A)
        func_081338(2, 3);
    p = func_000F38();
    func_074BA8(p + 0x30, D_0014E7A4, v, 1);
    func_02BC08();
    func_02BB80();
    if (D_0014E78C)
        func_071740();
    if (D_0014E78A)
        func_0821A0();
    func_080238(D_0018C270, frame & 0xFF);
    func_090B68(0);
    if (D_0014E78C) {
        if (player->p59C != 0) {
            p = func_000F38();
            tmp = *(Vec3 *)(p + 0x30);
            func_072B08(&tmp, 36.0f);
        }
    }
    func_08B280(0xA, 0xB, frame);
    func_085AF8(frame, 0.033333335f);
    func_08B280(0xD, 0xE, frame);
    func_08B280(0xF, 0x13, frame);
    func_08B280(0x14, 0x17, frame);
    func_08B280(0x18, 0x1B, frame);
    func_070EA0(4);
    func_08B280(0x1C, 0x1D, frame);
    func_090720(0, 2);
    func_09E6E0();
}

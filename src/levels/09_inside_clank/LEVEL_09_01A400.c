/* LEVEL_09:0x01A400 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0021C8C0;
extern int D_001D9218;
extern int D_001D9224;
extern unsigned char D_001D920A;
extern unsigned char D_001D920B;
extern unsigned char D_001D920C;
extern unsigned char D_001D920D;
extern unsigned char D_001D9209;
extern unsigned char D_001E01D8;
extern int D_001E01DC;
extern char D_00221DF0[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_08BAC8(int);
extern void func_07A7B8(int);
extern void func_001000(int);
extern void func_094298(int, int, int, int);
extern void func_095ED8(int);
extern int func_0176C0(void);
extern void func_090600(int);
extern void func_091128(void);
extern void func_096E18(int);
extern void func_096E70(int, int, int);
extern void func_09F3C0(int, int);
extern void func_017378(void);
extern char *func_0011C8(void);
extern void func_080818(char *, int);
extern void func_07F7E0(char *, int, float *, int);
extern void func_07BA90(void);
extern void func_08CCC0(int, int);
extern void func_080C48(void);
extern void func_09CD68(void);
extern void func_0321F8(void);
extern void func_07B7E8(void);
extern void func_0174C8(void);
extern void func_07BB00(void);
extern void func_032218(void);
extern void func_032190(void);
extern void func_08DB28(void);
extern void func_08BBC0(char *, int);
extern void func_09F808(int);
extern void func_07CBB0(Vec3 *, float);
extern void func_091480(int, float);
extern void func_07AF48(int);
extern void func_0AD380(void);

void func_01A400(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001D9218 = frame;
    func_08BAC8(frame & 0xFF);
    if (D_001D920D) {
        func_07A7B8(1);
        func_001000(frame);
        func_094298(0, 0x1D, frame, 0);
        func_095ED8(frame);
    }
    D_001D9224 = func_0176C0();
    D_001E01D8 = 0;
    func_090600(D_001E01DC);
    if (D_001D920C)
        func_091128();
    FOG_Update(frame);
    func_096E18(D_001D9218);
    func_096E70(0, 1, frame);
    func_09F3C0(1, 2);
    func_017378();
    func_096E70(2, 3, frame);
    if (D_001D9209) {
        p = func_0011C8();
        func_080818(p + 0x30, D_001D9224);
    }
    func_096E70(4, 5, frame);
    player = &D_0021C8C0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_07F7E0(p + 0x30, D_001D9224, v, 0);
    }
    func_096E70(6, 7, frame);
    func_07BA90();
    func_001000(frame);
    if (D_001D920A)
        func_08CCC0(0, 1);
    func_080C48();
    func_09CD68();
    func_0321F8();
    if (D_001D920C)
        func_07B7E8();
    func_096E70(8, 9, frame);
    if (D_001D920B)
        func_0174C8();
    func_07BB00();
    if (D_001D920A)
        func_08CCC0(2, 3);
    p = func_0011C8();
    func_07F7E0(p + 0x30, D_001D9224, v, 1);
    func_032218();
    func_032190();
    if (D_001D920C)
        func_07B7E8();
    if (D_001D920A)
        func_08DB28();
    func_08BBC0(D_00221DF0, frame & 0xFF);
    func_09F808(0);
    if (D_001D920C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_07CBB0(&tmp, 36.0f);
        }
    }
    func_096E70(0xA, 0xB, frame);
    func_091480(frame, 0.033333335f);
    func_096E70(0xD, 0xE, frame);
    func_096E70(0xF, 0x13, frame);
    func_096E70(0x14, 0x17, frame);
    func_096E70(0x18, 0x1B, frame);
    func_07AF48(4);
    func_096E70(0x1C, 0x1D, frame);
    func_09F3C0(0, 2);
    func_0AD380();
}

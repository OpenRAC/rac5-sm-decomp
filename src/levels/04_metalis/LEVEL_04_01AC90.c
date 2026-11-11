/* LEVEL_04:0x01AC90 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0024F950;
extern int D_00208598;
extern int D_002085A4;
extern unsigned char D_0020858A;
extern unsigned char D_0020858B;
extern unsigned char D_0020858C;
extern unsigned char D_0020858D;
extern unsigned char D_00208589;
extern unsigned char D_0020F898;
extern int D_0020F89C;
extern char D_00254E80[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_092468(int);
extern void func_081198(int);
extern void func_000E08(int);
extern void func_09AAF0(int, int, int, int);
extern void func_09C730(int);
extern int func_017F48(void);
extern void func_096FA0(int);
extern void func_097AC8(void);
extern void func_09D670(int);
extern void func_09D6C8(int, int, int);
extern void func_0A7320(int, int);
extern void func_017C28(void);
extern char *func_000FD0(void);
extern void func_087368(char *, int);
extern void func_086330(char *, int, float *, int);
extern void func_082470(void);
extern void func_093660(int, int);
extern void func_087798(void);
extern void func_0A4CC8(void);
extern void func_037038(void);
extern void func_0821C8(void);
extern void func_017D78(void);
extern void func_0824E0(void);
extern void func_037058(void);
extern void func_036FD0(void);
extern void func_0944C8(void);
extern void func_092560(char *, int);
extern void func_0A7768(int);
extern void func_083590(Vec3 *, float);
extern void func_097E20(int, float);
extern void func_081928(int);
extern void func_0B5320(void);

void func_01AC90(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00208598 = frame;
    func_092468(frame & 0xFF);
    if (D_0020858D) {
        func_081198(1);
        func_000E08(frame);
        func_09AAF0(0, 0x1D, frame, 0);
        func_09C730(frame);
    }
    D_002085A4 = func_017F48();
    D_0020F898 = 0;
    func_096FA0(D_0020F89C);
    if (D_0020858C)
        func_097AC8();
    FOG_Update(frame);
    func_09D670(D_00208598);
    func_09D6C8(0, 1, frame);
    func_0A7320(1, 2);
    func_017C28();
    func_09D6C8(2, 3, frame);
    if (D_00208589) {
        p = func_000FD0();
        func_087368(p + 0x30, D_002085A4);
    }
    func_09D6C8(4, 5, frame);
    player = &D_0024F950;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_000FD0();
        func_086330(p + 0x30, D_002085A4, v, 0);
    }
    func_09D6C8(6, 7, frame);
    func_082470();
    func_000E08(frame);
    if (D_0020858A)
        func_093660(0, 1);
    func_087798();
    func_0A4CC8();
    func_037038();
    if (D_0020858C)
        func_0821C8();
    func_09D6C8(8, 9, frame);
    if (D_0020858B)
        func_017D78();
    func_0824E0();
    if (D_0020858A)
        func_093660(2, 3);
    p = func_000FD0();
    func_086330(p + 0x30, D_002085A4, v, 1);
    func_037058();
    func_036FD0();
    if (D_0020858C)
        func_0821C8();
    if (D_0020858A)
        func_0944C8();
    func_092560(D_00254E80, frame & 0xFF);
    func_0A7768(0);
    if (D_0020858C) {
        if (player->p59C != 0) {
            p = func_000FD0();
            tmp = *(Vec3 *)(p + 0x30);
            func_083590(&tmp, 36.0f);
        }
    }
    func_09D6C8(0xA, 0xB, frame);
    func_097E20(frame, 0.033333335f);
    func_09D6C8(0xD, 0xE, frame);
    func_09D6C8(0xF, 0x13, frame);
    func_09D6C8(0x14, 0x17, frame);
    func_09D6C8(0x18, 0x1B, frame);
    func_081928(4);
    func_09D6C8(0x1C, 0x1D, frame);
    func_0A7320(0, 2);
    func_0B5320();
}

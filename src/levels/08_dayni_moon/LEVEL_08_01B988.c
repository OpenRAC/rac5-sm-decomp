/* LEVEL_08:0x01B988 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_002843D0;
extern int D_00237F98;
extern int D_00237FA4;
extern unsigned char D_00237F8A;
extern unsigned char D_00237F8B;
extern unsigned char D_00237F8C;
extern unsigned char D_00237F8D;
extern unsigned char D_00237F89;
extern unsigned char D_0023F298;
extern int D_0023F29C;
extern char D_00289900[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_097290(int);
extern void func_085CA8(int);
extern void func_001000(int);
extern void func_09FA88(int, int, int, int);
extern void func_0A16C8(int);
extern int func_018BA0(void);
extern void func_09BDC8(int);
extern void func_09C8F0(void);
extern void func_0A2608(int);
extern void func_0A2660(int, int, int);
extern void func_0ACA08(int, int);
extern void func_018858(void);
extern char *func_0011C8(void);
extern void func_08BEB0(char *, int);
extern void func_08AE78(char *, int, float *, int);
extern void func_086F80(void);
extern void func_098488(int, int);
extern void func_08C2E0(void);
extern void func_0AA3B0(void);
extern void func_03A868(void);
extern void func_086CD8(void);
extern void func_0189A8(void);
extern void func_086FF0(void);
extern void func_03A888(void);
extern void func_03A800(void);
extern void func_0992F0(void);
extern void func_097388(char *, int);
extern void func_0ACE50(int);
extern void func_0880A0(Vec3 *, float);
extern void func_09CC48(int, float);
extern void func_086438(int);
extern void func_0BAA08(void);

void func_01B988(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00237F98 = frame;
    func_097290(frame & 0xFF);
    if (D_00237F8D) {
        func_085CA8(1);
        func_001000(frame);
        func_09FA88(0, 0x1D, frame, 0);
        func_0A16C8(frame);
    }
    D_00237FA4 = func_018BA0();
    D_0023F298 = 0;
    func_09BDC8(D_0023F29C);
    if (D_00237F8C)
        func_09C8F0();
    FOG_Update(frame);
    func_0A2608(D_00237F98);
    func_0A2660(0, 1, frame);
    func_0ACA08(1, 2);
    func_018858();
    func_0A2660(2, 3, frame);
    if (D_00237F89) {
        p = func_0011C8();
        func_08BEB0(p + 0x30, D_00237FA4);
    }
    func_0A2660(4, 5, frame);
    player = &D_002843D0;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_08AE78(p + 0x30, D_00237FA4, v, 0);
    }
    func_0A2660(6, 7, frame);
    func_086F80();
    func_001000(frame);
    if (D_00237F8A)
        func_098488(0, 1);
    func_08C2E0();
    func_0AA3B0();
    func_03A868();
    if (D_00237F8C)
        func_086CD8();
    func_0A2660(8, 9, frame);
    if (D_00237F8B)
        func_0189A8();
    func_086FF0();
    if (D_00237F8A)
        func_098488(2, 3);
    p = func_0011C8();
    func_08AE78(p + 0x30, D_00237FA4, v, 1);
    func_03A888();
    func_03A800();
    if (D_00237F8C)
        func_086CD8();
    if (D_00237F8A)
        func_0992F0();
    func_097388(D_00289900, frame & 0xFF);
    func_0ACE50(0);
    if (D_00237F8C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_0880A0(&tmp, 36.0f);
        }
    }
    func_0A2660(0xA, 0xB, frame);
    func_09CC48(frame, 0.033333335f);
    func_0A2660(0xD, 0xE, frame);
    func_0A2660(0xF, 0x13, frame);
    func_0A2660(0x14, 0x17, frame);
    func_0A2660(0x18, 0x1B, frame);
    func_086438(4);
    func_0A2660(0x1C, 0x1D, frame);
    func_0ACA08(0, 2);
    func_0BAA08();
}

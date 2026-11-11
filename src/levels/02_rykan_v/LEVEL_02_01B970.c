/* LEVEL_02:0x01B970 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_0024C650;
extern int D_00204098;
extern int D_002040A4;
extern unsigned char D_0020408A;
extern unsigned char D_0020408B;
extern unsigned char D_0020408C;
extern unsigned char D_0020408D;
extern unsigned char D_00204089;
extern unsigned char D_0020B398;
extern int D_0020B39C;
extern char D_00251B80[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_095A40(int);
extern void func_084608(int);
extern void func_001000(int);
extern void func_09E0B8(int, int, int, int);
extern void func_09FCF8(int);
extern int func_018C40(void);
extern void func_09A578(int);
extern void func_09B0A0(void);
extern void func_0A0C38(int);
extern void func_0A0C90(int, int, int);
extern void func_0A8A20(int, int);
extern void func_0188F8(void);
extern char *func_0011C8(void);
extern void func_08A7E8(char *, int);
extern void func_0897B0(char *, int, float *, int);
extern void func_0858E0(void);
extern void func_096C38(int, int);
extern void func_08AC18(void);
extern void func_0A63A0(void);
extern void func_03A438(void);
extern void func_085638(void);
extern void func_018A48(void);
extern void func_085950(void);
extern void func_03A458(void);
extern void func_03A3D0(void);
extern void func_097AA0(void);
extern void func_095B38(char *, int);
extern void func_0A8E68(int);
extern void func_086A00(Vec3 *, float);
extern void func_09B3F8(int, float);
extern void func_084D98(int);
extern void func_0B69E0(void);

void func_01B970(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_00204098 = frame;
    func_095A40(frame & 0xFF);
    if (D_0020408D) {
        func_084608(1);
        func_001000(frame);
        func_09E0B8(0, 0x1D, frame, 0);
        func_09FCF8(frame);
    }
    D_002040A4 = func_018C40();
    D_0020B398 = 0;
    func_09A578(D_0020B39C);
    if (D_0020408C)
        func_09B0A0();
    FOG_Update(frame);
    func_0A0C38(D_00204098);
    func_0A0C90(0, 1, frame);
    func_0A8A20(1, 2);
    func_0188F8();
    func_0A0C90(2, 3, frame);
    if (D_00204089) {
        p = func_0011C8();
        func_08A7E8(p + 0x30, D_002040A4);
    }
    func_0A0C90(4, 5, frame);
    player = &D_0024C650;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_0897B0(p + 0x30, D_002040A4, v, 0);
    }
    func_0A0C90(6, 7, frame);
    func_0858E0();
    func_001000(frame);
    if (D_0020408A)
        func_096C38(0, 1);
    func_08AC18();
    func_0A63A0();
    func_03A438();
    if (D_0020408C)
        func_085638();
    func_0A0C90(8, 9, frame);
    if (D_0020408B)
        func_018A48();
    func_085950();
    if (D_0020408A)
        func_096C38(2, 3);
    p = func_0011C8();
    func_0897B0(p + 0x30, D_002040A4, v, 1);
    func_03A458();
    func_03A3D0();
    if (D_0020408C)
        func_085638();
    if (D_0020408A)
        func_097AA0();
    func_095B38(D_00251B80, frame & 0xFF);
    func_0A8E68(0);
    if (D_0020408C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_086A00(&tmp, 36.0f);
        }
    }
    func_0A0C90(0xA, 0xB, frame);
    func_09B3F8(frame, 0.033333335f);
    func_0A0C90(0xD, 0xE, frame);
    func_0A0C90(0xF, 0x13, frame);
    func_0A0C90(0x14, 0x17, frame);
    func_0A0C90(0x18, 0x1B, frame);
    func_084D98(4);
    func_0A0C90(0x1C, 0x1D, frame);
    func_0A8A20(0, 2);
    func_0B69E0();
}

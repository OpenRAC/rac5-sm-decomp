/* LEVEL_24:0x019600 -- placement copy of LEVEL_01_01B010.c: per-frame update that runs the level's subsystem passes in order. */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_00201040;
extern int D_001C0098;
extern int D_001C00A4;
extern unsigned char D_001C008A;
extern unsigned char D_001C008B;
extern unsigned char D_001C008C;
extern unsigned char D_001C008D;
extern unsigned char D_001C0089;
extern unsigned char D_001C7058;
extern int D_001C705C;
extern char D_00206570[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_088170(int);
extern void func_078418(int);
extern void func_000E08(int);
extern void func_090940(int, int, int, int);
extern void func_092580(int);
extern int func_016EF0(void);
extern void func_08CCA8(int);
extern void func_08D7D0(void);
extern void func_0934C0(int);
extern void func_093518(int, int, int);
extern void func_09B988(int, int);
extern void func_016BD8(void);
extern char *func_000FD0(void);
extern void func_07D9A8(char *, int);
extern void func_07C970(char *, int, float *, int);
extern void func_0796F0(void);
extern void func_089368(int, int);
extern void func_07DDD8(void);
extern void func_099330(void);
extern void func_02ED90(void);
extern void func_079448(void);
extern void func_016D28(void);
extern void func_079760(void);
extern void func_02EDB0(void);
extern void func_02ED28(void);
extern void func_08A1D0(void);
extern void func_088268(char *, int);
extern void func_09BDD0(int);
extern void func_07A810(Vec3 *, float);
extern void func_08DB28(int, float);
extern void func_078BA8(int);
extern void func_0A9948(void);

void func_019600(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001C0098 = frame;
    func_088170(frame & 0xFF);
    if (D_001C008D) {
        func_078418(1);
        func_000E08(frame);
        func_090940(0, 0x1D, frame, 0);
        func_092580(frame);
    }
    D_001C00A4 = func_016EF0();
    D_001C7058 = 0;
    func_08CCA8(D_001C705C);
    if (D_001C008C)
        func_08D7D0();
    FOG_Update(frame);
    func_0934C0(D_001C0098);
    func_093518(0, 1, frame);
    func_09B988(1, 2);
    func_016BD8();
    func_093518(2, 3, frame);
    if (D_001C0089) {
        p = func_000FD0();
        func_07D9A8(p + 0x30, D_001C00A4);
    }
    func_093518(4, 5, frame);
    player = &D_00201040;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_000FD0();
        func_07C970(p + 0x30, D_001C00A4, v, 0);
    }
    func_093518(6, 7, frame);
    func_0796F0();
    func_000E08(frame);
    if (D_001C008A)
        func_089368(0, 1);
    func_07DDD8();
    func_099330();
    func_02ED90();
    if (D_001C008C)
        func_079448();
    func_093518(8, 9, frame);
    if (D_001C008B)
        func_016D28();
    func_079760();
    if (D_001C008A)
        func_089368(2, 3);
    p = func_000FD0();
    func_07C970(p + 0x30, D_001C00A4, v, 1);
    func_02EDB0();
    func_02ED28();
    if (D_001C008C)
        func_079448();
    if (D_001C008A)
        func_08A1D0();
    func_088268(D_00206570, frame & 0xFF);
    func_09BDD0(0);
    if (D_001C008C) {
        if (player->p59C != 0) {
            p = func_000FD0();
            tmp = *(Vec3 *)(p + 0x30);
            func_07A810(&tmp, 36.0f);
        }
    }
    func_093518(0xA, 0xB, frame);
    func_08DB28(frame, 0.033333335f);
    func_093518(0xD, 0xE, frame);
    func_093518(0xF, 0x13, frame);
    func_093518(0x14, 0x17, frame);
    func_093518(0x18, 0x1B, frame);
    func_078BA8(4);
    func_093518(0x1C, 0x1D, frame);
    func_09B988(0, 2);
    func_0A9948();
}

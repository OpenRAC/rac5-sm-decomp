/* LEVEL_01.REL:0x01B010: reviewed 884-byte candidate, held for ABI review.
 * Per-frame update that runs the level's subsystem passes in order.
 * pinned C with gnu-ee-trial links 884/884 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_0011C8 returning pointer with no arguments, but the
 * accepted LEVEL_01_0011C8.c defines it returning int with no arguments.
 * It declares func_094D28 returning void with (int, float), but the accepted
 * LEVEL_01_094D28.c defines it returning void with (float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x, y, z;
} Vec3;
typedef struct {
    unsigned char pad00[0x30];
    float x, y, z;
    unsigned char pad3C[0x59C - 0x3C];
    void *p59C;
} Actor;

extern Actor D_00235140;
extern int D_001EF418;
extern int D_001EF424;
extern unsigned char D_001EF40A;
extern unsigned char D_001EF40B;
extern unsigned char D_001EF40C;
extern unsigned char D_001EF40D;
extern unsigned char D_001EF409;
extern unsigned char D_001F63D8;
extern int D_001F63DC;
extern char D_0023A670[];
extern void FOG_Update(unsigned int) __asm__("FOG_Update__FUi");

extern void func_08F370(int);
extern void func_07DD38(int);
extern void func_001000(int);
extern void func_0979E8(int, int, int, int);
extern void func_099628(int);
extern int func_0182B0(void);
extern void func_093EA8(int);
extern void func_0949D0(void);
extern void func_09A568(int);
extern void func_09A5C0(int, int, int);
extern void func_0A2110(int, int);
extern void func_017F68(void);
extern char *func_0011C8(void);
extern void func_083E38(char *, int);
extern void func_082DA8(char *, int, float *, int);
extern void func_07F010(void);
extern void func_090568(int, int);
extern void func_084268(void);
extern void func_09FAB0(void);
extern void func_0359F0(void);
extern void func_07ED68(void);
extern void func_0180B8(void);
extern void func_07F080(void);
extern void func_035A10(void);
extern void func_035988(void);
extern void func_0913D0(void);
extern void func_08F468(char *, int);
extern void func_0A2558(int);
extern void func_080130(Vec3 *, float);
extern void func_094D28(int, float);
extern void func_07E4C8(int);
extern void func_0B00D0(void);

void func_01B010(int frame)
{
    Actor *player;
    float v[4];
    Vec3 tmp;
    char *p;

    D_001EF418 = frame;
    func_08F370(frame & 0xFF);
    if (D_001EF40D) {
        func_07DD38(1);
        func_001000(frame);
        func_0979E8(0, 0x1D, frame, 0);
        func_099628(frame);
    }
    D_001EF424 = func_0182B0();
    D_001F63D8 = 0;
    func_093EA8(D_001F63DC);
    if (D_001EF40C)
        func_0949D0();
    FOG_Update(frame);
    func_09A568(D_001EF418);
    func_09A5C0(0, 1, frame);
    func_0A2110(1, 2);
    func_017F68();
    func_09A5C0(2, 3, frame);
    if (D_001EF409) {
        p = func_0011C8();
        func_083E38(p + 0x30, D_001EF424);
    }
    func_09A5C0(4, 5, frame);
    player = &D_00235140;
    if (player != 0) {
        v[0] = player->x;
        v[1] = player->y;
        v[2] = player->z;
        v[3] = 4.0f;
        p = func_0011C8();
        func_082DA8(p + 0x30, D_001EF424, v, 0);
    }
    func_09A5C0(6, 7, frame);
    func_07F010();
    func_001000(frame);
    if (D_001EF40A)
        func_090568(0, 1);
    func_084268();
    func_09FAB0();
    func_0359F0();
    if (D_001EF40C)
        func_07ED68();
    func_09A5C0(8, 9, frame);
    if (D_001EF40B)
        func_0180B8();
    func_07F080();
    if (D_001EF40A)
        func_090568(2, 3);
    p = func_0011C8();
    func_082DA8(p + 0x30, D_001EF424, v, 1);
    func_035A10();
    func_035988();
    if (D_001EF40C)
        func_07ED68();
    if (D_001EF40A)
        func_0913D0();
    func_08F468(D_0023A670, frame & 0xFF);
    func_0A2558(0);
    if (D_001EF40C) {
        if (player->p59C != 0) {
            p = func_0011C8();
            tmp = *(Vec3 *)(p + 0x30);
            func_080130(&tmp, 36.0f);
        }
    }
    func_09A5C0(0xA, 0xB, frame);
    func_094D28(frame, 0.033333335f);
    func_09A5C0(0xD, 0xE, frame);
    func_09A5C0(0xF, 0x13, frame);
    func_09A5C0(0x14, 0x17, frame);
    func_09A5C0(0x18, 0x1B, frame);
    func_07E4C8(4);
    func_09A5C0(0x1C, 0x1D, frame);
    func_0A2110(0, 2);
    func_0B00D0();
}

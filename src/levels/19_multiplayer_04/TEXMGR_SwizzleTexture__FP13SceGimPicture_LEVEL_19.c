/* LEVEL_19:0x092028 -- placement copy of FRONTEND_008430.c: uploads a texture to the GS and reads it back in its swizzled form once, for 8-bit and 4-bit formats. */

struct Tex008430 {
    char pad0[4];
    unsigned short h4;
    unsigned short h6;
    unsigned short h8;
    unsigned short hA;
};

extern int func_08F308(void *p);
extern void *func_08F338(const char *owner, int column, int frame);
extern void writeTexPSMT8(int a, unsigned int b, int c, int d, unsigned int e, unsigned int f, void *p) __asm__("writeTexPSMT8__FiiiiiiPv");
extern void readTexPSMCT32(int a, unsigned int b, int c, int d, unsigned int e, unsigned int f, void *p) __asm__("readTexPSMCT32__FiiiiiiPv");
extern void writeTexPSMT4(int a, unsigned int b, int c, int d, unsigned int e, unsigned int f, void *p) __asm__("writeTexPSMT4__FiiiiiiPv");
extern void readTexPSMCT16(int a, unsigned int b, int c, int d, unsigned int e, unsigned int f, void *p) __asm__("readTexPSMCT16__FiiiiiiPv");

void TEXMGR_SwizzleTexture__FP13SceGimPicture(void *id)
{
    struct Tex008430 *t;
    void *buf;

    t = (struct Tex008430 *)func_08F308(id);
    if (t->h6 != 0) {
        return;
    }
    buf = func_08F338(id, 0, 0);
    if (t->h4 == 5) {
        if (t->h8 < 0x20) {
            return;
        }
        if (t->hA < 0x20) {
            return;
        }
        writeTexPSMT8(0, (t->h8 + 63U) >> 6, 0, 0, t->h8, t->hA, buf);
        readTexPSMCT32(0, ((t->h8 >> 1) + 63U) >> 6, 0, 0, t->h8 >> 1, t->hA >> 1, buf);
        t->h6 = 1;
    } else if (t->h4 == 4) {
        if (t->h8 < 0x20) {
            return;
        }
        if (t->hA < 0x20) {
            return;
        }
        writeTexPSMT4(0, (t->h8 + 63U) >> 6, 0, 0, t->h8, t->hA, buf);
        readTexPSMCT16(0, ((t->hA >> 1) + 63U) >> 6, 0, 0, t->hA >> 1, t->h8 >> 1, buf);
        t->h6 = 1;
    }
}

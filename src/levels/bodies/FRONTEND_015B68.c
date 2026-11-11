/* FRONTEND:0x015B68 -- redraws the loading overlay for a new screen key: caches the key's resource, then steps the progress rows until the window rectangle runs out. */

typedef struct {
    char pad_00[0xC];
    int w_0C;
    char pad_10[4];
    int a_14;
    char pad_18[8];
    unsigned int flags_20;
    char pad_24[2];
    short h_26;
} Win;

typedef struct {
    int a;
    int b;
    char pad_08[0x10];
} Ent;

extern int D_00030418;
extern int D_0003041C;
extern int D_00030354;
extern int D_00030358;
extern int D_00030370;
extern int D_00030374;
extern int D_0003036C;
extern int D_00030368;
extern int D_00030378;
extern unsigned int D_00030384;
extern int D_0003035C;
extern int D_00030360;
extern Ent D_00030388[];
extern Win D_00196FF8;

extern int func_01F778(int key);
extern void *func_019500(void);
extern void func_012108(int *p, int a, int b);
extern void func_015950(int a0, int a1);
extern int func_0145C8(int index);
extern void func_00DD40(Win *w);
extern void func_010018(int a, int *r, float f);
extern int func_00B5E0(int *r);
extern int func_00B610(int *r);
extern int func_00B640(int *r);
extern int func_00B658(int *r);
extern void func_00DC30(Win *w, short x, short y, short hw, short hh, int val);
extern void func_015B00(unsigned int a0);

void func_015B68(int x, int y, int key, int other)
{
    int r[4];
    int done;
    int t1;
    int t2;

    if (D_00030418 != key) {
        D_0003041C = func_01F778(key);
        D_00030418 = key;
    }
    func_012108(func_019500(), 3, 1);
    t1 = D_00030354;
    t2 = D_00030358;
    func_015950(x, y);
    D_00030354 = t1;
    D_00030358 = t2;
    if (D_00030370 != 0) {
        if (D_00030374 == D_0003041C) {
            goto finish;
        }
    } else {
        func_0145C8(6);
    }
    D_00030370 = 1;
    D_0003036C = D_00030368;
    done = 0;
    D_00030374 = D_0003041C;
    D_00030378 = func_01F778(other);
    D_00196FF8.a_14 = D_00030374;
    do {
        D_00196FF8.flags_20 |= 0x20;
        func_00DD40(&D_00196FF8);
        D_00196FF8.flags_20 &= 0xFFFFFFDF;
        if (D_00196FF8.h_26 >= D_00196FF8.w_0C) {
            D_00030384 = D_00030384 + 1;
            func_010018(D_00030388[D_00030384].b, r, 0.0f);
            D_0003035C = x - func_00B5E0(r);
            D_00030360 = y - func_00B610(r);
            r[0] += D_0003035C;
            r[2] += D_0003035C;
            r[1] += D_00030360;
            r[3] += D_00030360;
            func_00DC30(&D_00196FF8, func_00B5E0(r), func_00B610(r), func_00B640(r), func_00B658(r), 0x40602020);
            D_00196FF8.a_14 = D_00030374;
        } else {
            done = 1;
        }
    } while (!done && D_00030384 < 6);
    func_0145C8(6);
finish:
    D_00196FF8.a_14 = D_00030374;
    func_015B00(5);
}

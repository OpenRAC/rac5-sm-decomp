/* LEVEL_03:0x1C1A48 -- per-frame check of two global request bytes: the first fires its sound once a counter reaches 26, the second fires when the linked entry is not flagged and the key lookup fails. */
typedef struct {
    char pad00[4];
    unsigned char b04;
    char pad05;
    unsigned short h06;
    char pad08[4];
    unsigned char b0C;
    unsigned char b0D;
} Req;

typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Target;

typedef struct {
    Target *f0;
    unsigned int f4;
} Holder;

typedef struct {
    char pad00[0x54];
    Holder *holder;
} Obj;

extern Req D_0024BDB0;
extern int D_00221CF0[];
extern char D_00242618[];

extern void func_0B8D50(void *first, void *second);
extern void func_0273B0(int index, unsigned char value, unsigned char bit);
extern int func_082618(int *keys, int nkeys, char **out, unsigned int *idx);

void func_1C1A48(Obj *o)
{
    Holder *h = o->holder;

    if (D_0024BDB0.b0D == 1) {
        if (D_0024BDB0.b04 != 0) {
            D_0024BDB0.h06 = 0;
        }
        if (D_0024BDB0.h06 >= 0x1A) {
            do {
                func_0B8D50(D_00242618, (void *)0x2B8);
                func_0273B0(0x78, 0xFF, 1);
                D_0024BDB0.b0D = 0x40;
            } while (0);
        }
    }
    if (D_0024BDB0.b0C == 1) {
        if (h->f0 != 0 && (h->f0->flags & 1) == 0) {
            if (func_082618(D_00221CF0, 1, (char **)h, &h->f4) == 0) {
                do {
                    func_0B8D50(D_00242618, (void *)0x2B8);
                    func_0273B0(0x78, 0xFF, 0);
                    D_0024BDB0.b0C = 0x40;
                } while (0);
            }
        }
    }
}

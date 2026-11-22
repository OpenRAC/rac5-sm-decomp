/* LEVEL_17:0x122F58 -- placement copy of LEVEL_16_123530.c: resets the two player slots, links the three record tables and clears the per-slot counters. */
struct Item {
    char pad_00[0x18];
};

struct Link {
    char pad_00[0x30];
    struct Item *item;
};

extern struct Item D_001AF6A8[];
extern struct Link D_001AFC70;
extern struct Link D_001AFD58;
extern struct Link D_001AFB88;
extern int D_001AFB7C;
extern int D_001AFB80;
extern int D_001AFEF8[];
extern int D_001AFF00[];
extern int D_001AFF08[];
extern unsigned int D_001A8284;
extern char D_001AFF10[];

extern void func_07BD58(int a);
extern void func_079E10(int a);
extern void func_079DA0(int a);
extern void func_1215B8(void *a);
extern void func_122748(int a);
extern void func_0A0A40(char *a);

void func_122F58(void)
{
    unsigned int i;
    int j;
    unsigned int k;

    func_07BD58(1);
    for (i = 0; i < 2; i++) {
        func_079E10(i);
        func_079DA0(0x200);
    }
    func_079E10(0);
    j = 0;
    func_1215B8(0);
    D_001AFB7C = D_001AFB80;
    D_001AFB88.item = &D_001AF6A8[0];
    D_001AFC70.item = &D_001AF6A8[1];
    D_001AFD58.item = &D_001AF6A8[2];
    do {
        D_001AFEF8[j] = 0;
        D_001AFF00[j] = 0;
        for (k = 0; k < D_001A8284; k++) {
            func_122748(j);
        }
        D_001AFF08[j] = 0;
        j++;
    } while (j < 2);
    func_0A0A40(D_001AFF10);
}

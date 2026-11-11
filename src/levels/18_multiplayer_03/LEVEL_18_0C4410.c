/* LEVEL_18:0x0C4410 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
typedef struct Entry {
    char pad_00[0xCC];
    unsigned char enabled;
    char pad_CD[3];
    int id;
} Entry;

typedef struct Menu {
    Entry **items;
    int w4;
    int sel;
    char pad_0C[0x10];
    int result;
} Menu;

typedef struct Game {
    int w0;
    int w4;
    unsigned int flags;
} Game;

extern Menu D_001B44F0;
extern Game *D_001A2F34;
extern char D_001B4224;
extern char D_001B4225;
extern char D_001ABF30[];

extern unsigned int func_078F38(int arg);
extern int func_0C5138(void);
extern void func_0C4368(unsigned int pad);
extern int func_0A76D0(Menu *menu, unsigned int pad);
extern int func_0A40A8(int id);
extern void func_0C4310(int id);
extern int func_0A9DF8(void);
extern void func_0B78E8(int value);
extern int func_0AAEE0(int id);
extern void func_0181E0(int a, int b);
extern int func_0A0430(char *obj);

void func_0C4410(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_078F38(0x6B10);
    if (func_0C5138() != 0) {
        func_0C4368(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0A40A8(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001B44F0.items[D_001B44F0.sel]->enabled == 0) {
        goto done;
    }
    func_0A40A8(1);
    if (D_001B44F0.items[D_001B44F0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0A40A8(7);
    func_0181E0(4, 0);
    goto done;
choose:
    func_0A40A8(6);
    entry = D_001B44F0.items[D_001B44F0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001B4224 = 1;
            D_001B4225 = 0;
            func_0C4310(0x2A7);
        } else if (id == 0x66) {
            D_001B4224 = 0;
            D_001B4225 = 1;
            func_0C4310(0x2A8);
        } else if (id == 100) {
            D_001B4224 = 0;
            D_001B4225 = 0;
            D_001A2F34->flags = D_001A2F34->flags ^ 1;
        } else if (id == 6) {
            func_0B78E8(func_0A9DF8());
            func_0AAEE0(6);
        }
    }
    goto done;
passthrough:
    func_0A76D0(&D_001B44F0, pad);
done:
    D_001B44F0.result = func_0A0430(D_001ABF30);
}

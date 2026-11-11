/* LEVEL_21:0x0B6380 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_00159E40;
extern Game *D_00148C2C;
extern char D_00159B74;
extern char D_00159B75;
extern char D_001516B0[];

extern unsigned int func_06C700(int arg);
extern int func_0B70A8(void);
extern void func_0B62D8(unsigned int pad);
extern int func_099CF0(Menu *menu, unsigned int pad);
extern int func_096530(int id);
extern void func_0B6280(int id);
extern int func_09C378(void);
extern void func_0A9B10(int value);
extern int func_09D0C8(int id);
extern void func_016A10(int a, int b);
extern int func_093380(char *obj);

void func_0B6380(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_06C700(0x6B10);
    if (func_0B70A8() != 0) {
        func_0B62D8(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_096530(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_00159E40.items[D_00159E40.sel]->enabled == 0) {
        goto done;
    }
    func_096530(1);
    if (D_00159E40.items[D_00159E40.sel]->id != 0) {
        goto choose;
    }
leave:
    func_096530(7);
    func_016A10(4, 0);
    goto done;
choose:
    func_096530(6);
    entry = D_00159E40.items[D_00159E40.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_00159B74 = 1;
            D_00159B75 = 0;
            func_0B6280(0x2A7);
        } else if (id == 0x66) {
            D_00159B74 = 0;
            D_00159B75 = 1;
            func_0B6280(0x2A8);
        } else if (id == 100) {
            D_00159B74 = 0;
            D_00159B75 = 0;
            D_00148C2C->flags = D_00148C2C->flags ^ 1;
        } else if (id == 6) {
            func_0A9B10(func_09C378());
            func_09D0C8(6);
        }
    }
    goto done;
passthrough:
    func_099CF0(&D_00159E40, pad);
done:
    D_00159E40.result = func_093380(D_001516B0);
}

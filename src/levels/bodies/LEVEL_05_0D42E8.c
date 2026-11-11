/* LEVEL_05:0x0D42E8 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_001F4540;
extern Game *D_001E332C;
extern char D_001F4274;
extern char D_001F4275;
extern char D_001EBDB0[];

extern unsigned int func_085978(int arg);
extern int func_0D5010(void);
extern void func_0D4240(unsigned int pad);
extern int func_0B7C50(Menu *menu, unsigned int pad);
extern int func_0B45C8(int id);
extern void func_0D41E8(int id);
extern int func_0BA2D8(void);
extern void func_0C7A70(int value);
extern int func_0BB028(int id);
extern void func_019DC0(int a, int b);
extern int func_0B1078(char *obj);

void func_0D42E8(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_085978(0x6B10);
    if (func_0D5010() != 0) {
        func_0D4240(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B45C8(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_001F4540.items[D_001F4540.sel]->enabled == 0) {
        goto done;
    }
    func_0B45C8(1);
    if (D_001F4540.items[D_001F4540.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B45C8(7);
    func_019DC0(4, 0);
    goto done;
choose:
    func_0B45C8(6);
    entry = D_001F4540.items[D_001F4540.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_001F4274 = 1;
            D_001F4275 = 0;
            func_0D41E8(0x2A7);
        } else if (id == 0x66) {
            D_001F4274 = 0;
            D_001F4275 = 1;
            func_0D41E8(0x2A8);
        } else if (id == 100) {
            D_001F4274 = 0;
            D_001F4275 = 0;
            D_001E332C->flags = D_001E332C->flags ^ 1;
        } else if (id == 6) {
            func_0C7A70(func_0BA2D8());
            func_0BB028(6);
        }
    }
    goto done;
passthrough:
    func_0B7C50(&D_001F4540, pad);
done:
    D_001F4540.result = func_0B1078(D_001EBDB0);
}

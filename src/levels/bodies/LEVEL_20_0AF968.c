/* LEVEL_20:0x0AF968 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_00115750;
extern Game *D_00104194;
extern char D_00115484;
extern char D_00115485;
extern char D_0010D190[];

extern unsigned int func_067228(int arg);
extern int func_0B0690(void);
extern void func_0AF8C0(unsigned int pad);
extern int func_092C28(Menu *menu, unsigned int pad);
extern int func_08F6B0(int id);
extern void func_0AF868(int id);
extern int func_095350(void);
extern void func_0A2E40(int value);
extern int func_096438(int id);
extern void func_016950(int a, int b);
extern int func_08BB18(char *obj);

void func_0AF968(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_067228(0x6B10);
    if (func_0B0690() != 0) {
        func_0AF8C0(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_08F6B0(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_00115750.items[D_00115750.sel]->enabled == 0) {
        goto done;
    }
    func_08F6B0(1);
    if (D_00115750.items[D_00115750.sel]->id != 0) {
        goto choose;
    }
leave:
    func_08F6B0(7);
    func_016950(4, 0);
    goto done;
choose:
    func_08F6B0(6);
    entry = D_00115750.items[D_00115750.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_00115484 = 1;
            D_00115485 = 0;
            func_0AF868(0x2A7);
        } else if (id == 0x66) {
            D_00115484 = 0;
            D_00115485 = 1;
            func_0AF868(0x2A8);
        } else if (id == 100) {
            D_00115484 = 0;
            D_00115485 = 0;
            D_00104194->flags = D_00104194->flags ^ 1;
        } else if (id == 6) {
            func_0A2E40(func_095350());
            func_096438(6);
        }
    }
    goto done;
passthrough:
    func_092C28(&D_00115750, pad);
done:
    D_00115750.result = func_08BB18(D_0010D190);
}

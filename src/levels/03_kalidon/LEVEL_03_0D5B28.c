/* LEVEL_03:0x0D5B28 -- placement copy of LEVEL_01_0D5D40.c: handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_0021D840;
extern Game *D_0020C62C;
extern char D_0021D574;
extern char D_0021D575;
extern char D_002150B0[];

extern unsigned int func_087E78(int arg);
extern int func_0D6850(void);
extern void func_0D5A80(unsigned int pad);
extern int func_0B9490(Menu *menu, unsigned int pad);
extern int func_0B5E08(int id);
extern void func_0D5A28(int id);
extern int func_0BBB18(void);
extern void func_0C92B0(int value);
extern int func_0BC868(int id);
extern void func_01A590(int a, int b);
extern int func_0B28A0(char *obj);

void func_0D5B28(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_087E78(0x6B10);
    if (func_0D6850() != 0) {
        func_0D5A80(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B5E08(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_0021D840.items[D_0021D840.sel]->enabled == 0) {
        goto done;
    }
    func_0B5E08(1);
    if (D_0021D840.items[D_0021D840.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B5E08(7);
    func_01A590(4, 0);
    goto done;
choose:
    func_0B5E08(6);
    entry = D_0021D840.items[D_0021D840.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_0021D574 = 1;
            D_0021D575 = 0;
            func_0D5A28(0x2A7);
        } else if (id == 0x66) {
            D_0021D574 = 0;
            D_0021D575 = 1;
            func_0D5A28(0x2A8);
        } else if (id == 100) {
            D_0021D574 = 0;
            D_0021D575 = 0;
            D_0020C62C->flags = D_0020C62C->flags ^ 1;
        } else if (id == 6) {
            func_0C92B0(func_0BBB18());
            func_0BC868(6);
        }
    }
    goto done;
passthrough:
    func_0B9490(&D_0021D840, pad);
done:
    D_0021D840.result = func_0B28A0(D_002150B0);
}

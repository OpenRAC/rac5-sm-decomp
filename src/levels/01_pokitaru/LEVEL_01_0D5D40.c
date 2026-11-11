/* LEVEL_01:0x0D5D40 -- handles the pad input of the options menu (confirm toggles the selected entry, cancel leaves). */
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

extern Menu D_002051C0;
extern Game *D_001F3FAC;
extern char D_00204EF4;
extern char D_00204EF5;
extern char D_001FCA30[];

extern unsigned int func_088020(int arg);
extern int func_0D6A68(void);
extern void func_0D5C98(unsigned int pad);
extern int func_0B96A8(Menu *menu, unsigned int pad);
extern int func_0B6020(int id);
extern void func_0D5C40(int id);
extern int func_0BBD30(void);
extern void func_0C94C8(int value);
extern int func_0BCA80(int id);
extern void func_01A828(int a, int b);
extern int func_0B2AB8(char *obj);

void func_0D5D40(void)
{
    unsigned int pad;
    int id;
    Entry *entry;

    pad = func_088020(0x6B10);
    if (func_0D6A68() != 0) {
        func_0D5C98(pad);
        goto done;
    }
    if ((pad & 0x1008) != 0) {
        func_0B6020(0);
        goto leave;
    }
    if ((pad & 0x4000) == 0) {
        goto passthrough;
    }
    if (D_002051C0.items[D_002051C0.sel]->enabled == 0) {
        goto done;
    }
    func_0B6020(1);
    if (D_002051C0.items[D_002051C0.sel]->id != 0) {
        goto choose;
    }
leave:
    func_0B6020(7);
    func_01A828(4, 0);
    goto done;
choose:
    func_0B6020(6);
    entry = D_002051C0.items[D_002051C0.sel];
    if (entry->enabled != 0) {
        id = entry->id;
        if (id == 0x65) {
            D_00204EF4 = 1;
            D_00204EF5 = 0;
            func_0D5C40(0x2A7);
        } else if (id == 0x66) {
            D_00204EF4 = 0;
            D_00204EF5 = 1;
            func_0D5C40(0x2A8);
        } else if (id == 100) {
            D_00204EF4 = 0;
            D_00204EF5 = 0;
            D_001F3FAC->flags = D_001F3FAC->flags ^ 1;
        } else if (id == 6) {
            func_0C94C8(func_0BBD30());
            func_0BCA80(6);
        }
    }
    goto done;
passthrough:
    func_0B96A8(&D_002051C0, pad);
done:
    D_002051C0.result = func_0B2AB8(D_001FCA30);
}

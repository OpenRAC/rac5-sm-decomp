typedef unsigned int u32;

typedef struct {
    short x;
    short pad02;
    unsigned short y;
    short pad06;
    unsigned short right;
    short pad0A;
    unsigned short bottom;
    short pad0E;
} UiRect;

typedef struct {
    char pad[0x14];
    u32 flags;
} UiObject;

typedef struct {
    u32 id;
    u32 threshold;
    char pad[8];
} UiItem;

extern char D_0032C0C0[56];
extern UiObject D_0032C018;
extern unsigned char *D_001F3FAC;
extern u32 D_001F3FBC;
extern u32 D_00201C3C;
extern UiItem D_00214098[];
extern char D_00214090[];
extern void *memset(void *dst, int value, unsigned int size);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_0B9B18(UiObject *ui, u32 value, u32 flags, int zero);
extern int func_0AE708(int id, void *out, float zero);
extern void func_0B9E90(UiObject *ui, int x, int y, int right, int bottom);
extern void func_0B9E78(UiObject *ui, int id, u32 value);
extern void func_0B9998(UiObject *ui, u32 color0, u32 color1);
extern void func_0B9A78(UiObject *ui, int first, int second);
extern int func_1325B0(int id);
extern int func_0BA008(UiObject *ui, int item, int a, int b, int c);
extern void func_0BA120(UiObject *ui, u32 item, int a, int b,
                         int c, u32 d, int e, u32 f);
extern void func_0BA070(UiObject *ui);
extern void func_0B9C10(UiObject *ui);
extern void func_0CC818(void);

void func_0CC5D0(void) {
    UiRect rect;
    UiObject *ui;
    u32 counted = 0;
    u32 bit_index;
    unsigned char *bits_base;

    memset(D_0032C0C0, 0, 56);
    bits_base = D_001F3FAC + 0x8C0;
    for (bit_index = 0x77; bit_index < 0x7D; bit_index++) {
        unsigned char bits = bits_base[bit_index];
        unsigned char mask;
        for (mask = 1; mask != 0; mask = (unsigned char)(mask << 1))
            if (bits & mask)
                counted++;
    }
    D_001F3FBC = counted;

    ui = &D_0032C018;
    func_0B9B18(ui, D_00201C3C, 0x20800, 0);
    func_0AE708(0x1B8, &rect, 0.0f);
    func_0B9E90(ui, rect.x, (short)rect.y,
                 (short)rect.right, (short)rect.bottom);
    func_0B9E78(ui, 0x1BA, 0xFFFFFFFFu);
    func_0B9998(ui, 0x40602020u, 0xFFB07050u);

    {
        UiItem *entry = D_00214098;
        char *text = D_0032C0C0;
        u32 row_index;
        for (row_index = 0; row_index < 14; row_index++, entry++, text += 4) {
        u32 item;
        func_0B9A78(ui, 1, 1);
        item = (u32)func_1325B0(entry->id + 16);
        func_0BA008(ui, (int)item, 0, 0, 0);
        func_0BA120(ui, counted < entry->threshold ? 0x2ED : entry->id,
                     0, 0, 0x1BA, 0xFFFFFFFFu, 0, 0xFFFFFFFFu);
        sprintf(text, D_00214090, entry->threshold);
        func_0BA120(ui, (u32)text, 1, 0, 0x1B9, 0xFFFFFFFFu, 2, 0xFFFFFFFFu);
        func_0BA070(ui);
        }
    }
    ui->flags |= 0x14;
    func_0B9C10(ui);
    func_0CC818();
}

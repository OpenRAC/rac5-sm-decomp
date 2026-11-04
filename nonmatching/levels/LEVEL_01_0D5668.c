/* LEVEL_01.REL:0x0D5668 -- draw a menu and its timed entries. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    char pad[0xD0];
    u32 name_id;
    u32 elapsed;
    u32 detail;
} MenuEntry;

typedef struct {
    char pad[0x14];
    char *selected_name;
} MenuCache;

typedef struct {
    u32 reserved;
    u32 count;
    u32 selected;
} MenuListHeader;

extern unsigned char *D_001F3FAC;
extern MenuListHeader D_00204E40;
extern MenuEntry *D_00204EE8;
extern MenuCache D_0032CEF0;
extern char D_001FCA30[];
extern char D_00214708[];
extern char D_00214718[];

extern void func_0AC4B0(int x, int y, int width, int height, u32 color);
extern void func_0AE658(int id, int value);
extern void func_0AEAA8(float value, int id, u32 mask);
extern int func_0AE708(int id, void *out, float zero);
extern int func_0A8680(u16 *position);
extern int func_0A86B0(u16 *position);
extern char *func_1324B0(u32 id);
extern void func_0AA790(short x, short y, const char *text);
extern void func_0AAA48(float xscale, float yscale, short x, short y, const char *text);
extern MenuEntry *func_0BA408(MenuListHeader *list);
extern MenuEntry *func_0BA438(MenuListHeader *list, u32 index);
extern void func_0BA460(MenuListHeader *list);
extern void func_0AB4C8(MenuCache *cache);
extern void func_0AB500(MenuCache *cache);
extern void *func_0B2AB8(char *resource);
extern void func_0A8C90(void *value);
extern void func_0A8CA0(u32 color);
extern void func_0A98C0(short x, short y, const char *text);
extern void func_0AF400(float a, float b, float c, float d,
                         int id, int count, int start, int end, u32 mask);
extern u32 func_1EB278(float value);
extern int sprintf(char *dest, const char *format, ...);

void func_0D5668(void)
{
    u16 position[8];
    char buffer[256];
    short x;
    short y;
    float scale;
    MenuEntry *entry;
    u32 index;
    int top;
    int bottom;

    func_0AC4B0(0, 0, 0x1E0, 0x110, 0xFF000000u);
    func_0AE658(0x513, 0);
    func_0AEAA8(0.0f, 0x27, 0xFFFFFFFFu);
    func_0AE658(0x513, 1);

    func_0AE708(0x142, position, 0.0f);
    x = (short)func_0A8680(position);
    y = (short)position[6];
    func_0AA790(x, y, func_1324B0(0x2AB));

    func_0AE708(0x138, position, 0.0f);
    x = (short)func_0A8680(position);
    y = (short)position[6];
    func_0AA790(x, y, func_1324B0(0x1BD));

    func_0AE708(0x143, position, 0.0f);
    x = (short)func_0A8680(position);
    y = (short)position[6];
    func_0AA790(x, y, func_1324B0(0x223));

    func_0AE708(0x135, position, 0.0f);
    scale = 1.0f;
    if (*(int *)(D_001F3FAC + 0x3C) == 2)
        scale = 0.9f;
    x = (short)func_0A8680(position);
    y = (short)position[6];
    func_0AAA48(scale, scale, x, y, func_1324B0(0x2AE));

    entry = func_0BA408(&D_00204E40);
    if (entry != 0) {
        D_0032CEF0.selected_name = func_1324B0(entry->name_id);
        if (D_00204EE8 != entry) {
            func_0AB4C8(&D_0032CEF0);
            D_00204EE8 = entry;
        }
        func_0AB500(&D_0032CEF0);
        func_0AE708(0x13D, position, 0.0f);
        sprintf(buffer, func_1324B0(0x2AF), entry->detail);
        x = (short)func_0A8680(position);
        y = (short)position[6];
        func_0AA790(x, y, buffer);
    }

    func_0AE708(0x136, position, 0.0f);
    top = func_0A8680(position);
    func_0AE708(D_00204E40.selected + 0x13E, position, 0.0f);
    bottom = func_0A86B0(position);
    func_0A8C90(func_0B2AB8(D_001FCA30));
    func_0AF400(1.0f, 1.0f, 0.0f, 0.0f,
                 0x513, 5, top, bottom + 3, 0xFFFFFFFFu);

    index = 0;
    if (D_00204E40.count != 0) {
        do {
            entry = func_0BA438(&D_00204E40, index);
            if (entry != 0) {
                func_0AE708(index + 0x13E, position, 0.0f);
                func_0A8CA0(0xFFFFFFFFu);
                if (entry->elapsed == 0) {
                    sprintf(buffer, D_00214708, func_1324B0(0x2B0));
                    func_0A98C0((short)position[0], (short)position[6], buffer);
                } else {
                    u32 seconds = func_1EB278((float)entry->elapsed * 0.033333335f);
                    sprintf(buffer, D_00214718, seconds / 60, seconds % 60);
                    x = (short)func_0A8680(position);
                    y = (short)position[6];
                    func_0AA790(x, y, buffer);
                }
            }
            index++;
        } while (index < D_00204E40.count);
    }
    func_0BA460(&D_00204E40);
}

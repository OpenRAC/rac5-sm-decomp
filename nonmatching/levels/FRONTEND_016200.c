/* USA FRONTEND.REL:0x016200. Retained C hypothesis, not a match.
 * The gnu-ee-trial-divpad profile links 1736 bytes against a 1924-byte
 * body; first difference at body byte 92. The following zero word is
 * alignment outside this candidate body. See docs/MATCHING-BLOCKERS.md. */
typedef unsigned char u8;
typedef unsigned int u32;

/* Offsets are observed in the local frontend record. Field meanings are provisional. */
struct SaveRecord {
    u32 identifier;
    signed char type;
    u8 reserved5[3];
    u32 time_ticks;
    u32 style;
    u8 date[3];
};

extern u32 D_00030424;
extern u32 D_00030428;
extern char D_00030458[];
extern char D_00108088[];
extern char D_00108098[];
extern char D_001080B0[];
extern char D_001080B8[];
extern char D_001080C0[];
extern char D_001080C8[];

extern int func_000207D0(int);
extern int func_000208C8(void);
extern void func_0000FF68(int, int);
extern void func_00010348(float, int, int);
extern u32 func_00011FD8(const void *);
extern void func_0000B8E0(u32);
extern void func_00010CA0(float, float, float, float,
                          int, int, int, int, int);
extern int func_000212B0(int);
extern struct SaveRecord *func_000212D0(int);
extern int func_000161F0(int);
extern void func_00010018(float, int, short *);
extern void func_00021A30(int, short *, int);
extern u32 func_0001FDD0(u32, int);
extern short func_0000B5E0(short *);
extern short func_0000B610(short *);
extern void func_0000D618(float, float, float, float, int, int, int, u32);
extern char *func_0001F778(int);
extern void func_0000D948(float, float, int, int, const char *);
extern void func_0000C7A8(float, float, int, int, const char *);
extern int MEMCARD_GetHardcoreModeBit__FUi(unsigned int);
extern void func_0000C510(int, int, const char *);
extern void func_0000D6F0(int, int, const char *);
extern void func_0000CFE0(int, int, const char *);
extern int sprintf(char *, const char *, ...);
extern void *memset(void *, int, unsigned int);
extern char *strncat(char *, const char *, unsigned int);

#define DECIMAL_BCD(value) (((value) & 15) + ((value) >> 4) * 10)

void func_00016200(void)
{
    short position[8];
    char text[128];
    char suffix[128];
    u32 selected;
    int left, right;
    unsigned int slot;
    int status;
    struct SaveRecord *record;
    u8 inverse_selection;

    selected = func_000207D0(0) != 0;
    inverse_selection = func_000208C8() ^ 1;
    selected = selected & inverse_selection;
    if (selected != 0) {
        unsigned int clear_slot = 0;
        int clear_right = 0x4e5;
        int clear_left = 0x4e4;
        do {
            func_0000FF68(clear_left, 0);
            func_0000FF68(clear_right, 0);
            func_0000FF68(clear_slot + 0x4e0, 0);
            clear_slot++;
            clear_right += 2;
            clear_left += 2;
        } while (clear_slot < 4);

        func_00010348(0.0f, 0x1d, -1);
        left = 0x4e4;
        right = 0x4e5;
        slot = 0;
        do {
            int entry = slot * 4;
            func_0000FF68(left, 1);
            func_0000FF68(right, 1);
            if (D_00030424 == slot) {
                func_0000B8E0(func_00011FD8(&D_00030458));
                func_00010CA0(1.0f, 1.0f, 0.0f, 0.0f,
                              slot + 0x4e0, 4, 0, 0, -1);
                func_00010CA0(1.0f, 1.0f, 0.0f, 0.0f,
                              left, 4, 0, 0, -1);
                func_00010CA0(1.0f, 1.0f, 0.0f, 0.0f,
                              right, 4, 0, 0, -1);
            } else {
                status = func_000212B0(slot);
                if (status == 1 || status == 0)
                    func_0000B8E0(0xff09a5d0);
                else if (status == 0xff)
                    func_0000B8E0(0xff0000ff);
                func_00010CA0(1.0f, 1.0f, 0.0f, 0.0f,
                              left, 4, 0, 0, -1);
                func_00010CA0(1.0f, 1.0f, 0.0f, 0.0f,
                              right, 4, 0, 0, -1);
            }

            status = func_000212B0(slot);
            record = func_000212D0(slot);
            if (status == 1) {
                unsigned int hours;
                unsigned int capped_hours = 99;
                unsigned int minutes;
                u32 style_value;
                short x, y;
                char *label;

                func_00010018(0.0f, func_000161F0(slot), position);
                func_00021A30(slot, position, -1);
                func_00010018(0.0f, entry + 0xdf, position);
                style_value = func_0001FDD0(record->style, 1);
                x = func_0000B5E0(position);
                y = func_0000B610(position);
                func_0000D618(0.9f, 0.9f, 0.75f, 0.9f,
                              x, y, 0xb2, style_value);

                hours = (record->time_ticks / 30) / 3600;
                if (hours < 100)
                    capped_hours = hours;
                minutes = ((record->time_ticks / 30) / 60) % 60;
                func_00010018(0.0f, entry + 0xe1, position);
                label = func_0001F778(0x321);
                sprintf(text, D_00108088, label, capped_hours, minutes);
                y = func_0000B610(position);
                func_0000D948(0.95f, 0.95f, position[4],
                              y, text);

                label = func_0001F778(0x322);
                sprintf(text, D_00108098, label,
                        DECIMAL_BCD(record->date[1]),
                        DECIMAL_BCD(record->date[0]),
                        DECIMAL_BCD(record->date[2]));
                y = func_0000B610(position);
                func_0000C7A8(0.95f, 0.95f, position[0],
                              y, text);

                func_00010018(0.0f, entry + 0xde, position);
                memset(text, 0, sizeof(text));
                memset(suffix, 0, sizeof(suffix));
                if (MEMCARD_GetHardcoreModeBit__FUi(slot) != 0) {
                    label = func_0001F778(0x324);
                    sprintf(text, D_001080B0, label);
                }
                if (record->type == 0) {
                    sprintf(suffix, D_001080B8);
                    strncat(text, suffix, 0x40);
                } else {
                    label = func_0001F778(0x323);
                    sprintf(suffix, D_001080C0, label, record->type);
                    strncat(text, suffix, 0x40);
                }
                y = func_0000B610(position);
                func_0000C510(position[0], y, text);
                label = func_0001F778(0x325);
                sprintf(text, D_001080C8, record->identifier, label);
                y = func_0000B610(position);
                func_0000D6F0(position[4], y, text);
            } else if (status == 0) {
                func_00010018(0.0f, entry + 0xdf, position);
                {
                    short x = func_0000B5E0(position);
                    short y = func_0000B610(position);
                    char *label = func_0001F778(0xa7c);
                    func_0000CFE0(x, y, label);
                }
            } else if (status == 0xff) {
                func_00010018(0.0f, entry + 0xdf, position);
                {
                    short x = func_0000B5E0(position);
                    short y = func_0000B610(position);
                    char *label = func_0001F778(0xa7d);
                    func_0000CFE0(x, y, label);
                }
            }
            left += 2;
            right += 2;
            slot++;
        } while (slot < 4);
    }

    {
        int id = 0x2ba;
        if (D_00030428 != 0 && D_00030428 == 1)
            id = 0x1da;
        func_00010018(0.0f, 0xee, position);
        {
            short x = func_0000B5E0(position);
            char *label = func_0001F778(id);
            func_0000CFE0(x, position[6], label);
        }
        if (selected != 0) {
            char *label;
            func_00010018(0.0f, 0xdd, position);
            label = func_0001F778(0x223);
            func_0000C510(position[0], position[6], label);
            func_00010018(0.0f, 0xdc, position);
            label = func_0001F778(0x1ca);
            func_0000C510(position[0], position[6], label);
        }
    }
}

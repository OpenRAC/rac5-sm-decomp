/* scePadRead 0x01EA3F60 (14 November 2026).
 * Measured sdk991111: 9 differing words; first difference at +0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    char pad0[0x10];
    int open;
    char pad14[0x1C - 0x14];
} tPadSlot;

typedef struct {
    tPadSlot slot[4];
} tPadPort;

typedef struct {
    char data[0x60];
    int length;
    char pad64[0x80 - 0x64];
} tPadData;

extern char pad_act_client[];
extern int pad_read_01EA3E08(int port, int slot, void *out);
extern void *memcpy(void *dst, const void *src, unsigned int n);

int scePadRead(int port, int slot, unsigned char *data) {
    tPadData buf;
    int off = port * 0x70 + slot * 0x1C;
    tPadSlot *s = (tPadSlot *)(pad_act_client + 0x50 + off);

    if (s->open == 0) {
        return 0;
    }
    pad_read_01EA3E08(port, slot, &buf);
    memcpy(data, &buf, buf.length);
    return buf.length;
}

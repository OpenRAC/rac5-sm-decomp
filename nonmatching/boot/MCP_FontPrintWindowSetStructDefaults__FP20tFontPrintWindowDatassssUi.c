/* USA SCUS_976.15 boot: MCP_FontPrintWindowSetStructDefaults__FP20tFontPrintWindowDatassssUi,
 * 0x01E68508. Observed body: 204 bytes; the 264-byte interval also holds the
 * start of the next function after one alignment word, not claimed.
 * Measured 17 November 2026: all 204 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Clears the 0x54-byte font print window
 * record, then fills in the rectangle (centre x/y and size give left, top,
 * right and bottom with half the size on each side), the flags word, a
 * 0x85 mode word, 8-pixel padding, a default colour of 0xFFC0C0C0 and a
 * count of 1.
 * The order of the stores in the source mattered: left, right, top, bottom,
 * flags, then the remaining fields in ascending offset order decides which
 * registers hold the right edge and the constant 1.
 */
typedef struct {
    int left;
    int top;
    int right;
    int bottom;
    short padX;
    short padY;
    unsigned char pad14[0xC];
    int field20;
    unsigned char field24;
    unsigned char pad25[3];
    unsigned int flags;
    unsigned int color;
    int field30;
    unsigned char pad34[0x18];
    int field4C;
    unsigned char pad50[4];
} tFontPrintWindowData;

extern void *memset(void *destination, int value, unsigned int size);

void MCP_FontPrintWindowSetStructDefaults__FP20tFontPrintWindowDatassssUi(tFontPrintWindowData *window, short x, short y, short width, short height, unsigned int flags) {
    memset(window, 0, 0x54);
    window->left = x - (width >> 1);
    window->right = x + (width >> 1);
    window->top = y - (height >> 1);
    window->bottom = y + (height >> 1);
    window->flags = flags;
    window->field20 = 0x85;
    window->field24 = 0;
    window->padX = 8;
    window->padY = 8;
    window->field30 = 1;
    window->color = 0xFFC0C0C0;
    window->field4C = 0;
}

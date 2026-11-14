/* MEMCARD_SetHeaderDetail__FUiUiUiUiUi 0x01E628D0 (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x10.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[0x14];
} tMemcardSlot;

extern tMemcardSlot memcard_region[];

void MEMCARD_SetHeaderDetail__FUiUiUiUiUi(unsigned int slot, unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    unsigned char *s = (unsigned char *)&memcard_region[slot];

    *(unsigned int *)(s + 0x68) = a;
    s[0x6C] = b;
    *(unsigned int *)(s + 0x70) = c;
    *(unsigned int *)(s + 0x74) = d;
}

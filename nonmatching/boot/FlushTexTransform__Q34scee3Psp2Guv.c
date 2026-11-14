/* FlushTexTransform__Q34scee3Psp2Guv 0x01E81890 (14 November 2026).
 * Measured prodg2953: 6 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef unsigned int u_long128 __attribute__((mode(TI)));

typedef struct {
    unsigned char pad[4];
    unsigned char *data;
    unsigned char *tag;
} tDisplayList;

typedef struct {
    unsigned char b[16];
} tTag;

extern tDisplayList *display_list_current;
extern tTag g_cntTag;
extern u_long128 tex_state;
extern unsigned char tex_offset_dirty;
extern void SYSTEM_UpdateMatricies__Fv(void);

void FlushTexTransform__Q34scee3Psp2Guv(void) {
    tDisplayList *d;

    if (tex_offset_dirty != 0) {
        d = display_list_current;
        *(tTag *)d->tag = g_cntTag;
        *(u_long128 *)d->data = 0;
        *(unsigned int *)(d->data + 0xC) = 0x6C010014;
        *(u_long128 *)(d->data + 0x10) = tex_state;
        *(short *)d->tag = 2;
        d->tag = d->data + 0x20;
        d->data = d->data + 0x30;
        SYSTEM_UpdateMatricies__Fv();
        tex_offset_dirty = 1;
    }
}

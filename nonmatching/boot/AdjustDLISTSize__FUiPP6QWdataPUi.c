/* USA SCUS_976.15 boot: AdjustDLISTSize, 0x01E82ED0..0x01E82FC0.
 * Reconstructed from the owner's retail body; all 240 bytes reproduce after
 * independent SN linking under the rebuilt default GNU route, -O2 -G0,
 * default GNU assembler. gnu-ee-trial emits 244 bytes, 113 equal positions
 * in the compared 240-byte prefix, first difference +0x58 in loop padding.
 * No direct external branch enters the measured body interior.
 * Size zero selects g_dlibBufferSize. Original synchronization and both
 * display-list initialization calls are preserved. The caller and callees
 * corroborate 16-byte buffer elements, 0x28-byte list stride and the control
 * fields at +0x50/+0x54. This is a local prefix view, not a complete layout.
 * Output pointer/count are independently optional. The count expression
 * deliberately subtracts size once, although the pointer advances by twice
 * size; this is the original behavior, including unsigned wrapping.
 * Buffer bounds and valid capacity inputs remain semantic review duties.
 * No promotion or qualification is claimed with these rebuilt tools.
 */
typedef struct { unsigned int words[4]; } QWdata;
typedef struct { unsigned char bytes[0x28]; } DLIB_DISPLIST;
typedef struct {
    DLIB_DISPLIST lists[2];
    unsigned int index;
    DLIB_DISPLIST *current;
} DB_DISPLIST;
extern DB_DISPLIST db_dlist;
extern QWdata *g_dlibBuffer;
extern unsigned int g_dlibBufferSize;
extern int customGsSyncPath__FiUs(int, unsigned short);
extern void dlib_displist_init__FP13DLIB_DISPLISTP6QWdataUi(DLIB_DISPLIST *, QWdata *, unsigned int);
extern void dlib_displist_clear__FP13DLIB_DISPLIST(DLIB_DISPLIST *);

void AdjustDLISTSize__FUiPP6QWdataPUi(unsigned int size, QWdata **out_ptr, unsigned int *out_count)
{
    if (size == 0)
        size = g_dlibBufferSize;
    while (customGsSyncPath__FiUs(1, 0)) {
    }
    dlib_displist_init__FP13DLIB_DISPLISTP6QWdataUi(&db_dlist.lists[0], g_dlibBuffer, size);
    dlib_displist_init__FP13DLIB_DISPLISTP6QWdataUi(&db_dlist.lists[1], g_dlibBuffer + size, size);
    db_dlist.index = 0;
    db_dlist.current = &db_dlist.lists[0];
    dlib_displist_clear__FP13DLIB_DISPLIST(&db_dlist.lists[0]);
    if (out_ptr != 0)
        *out_ptr = g_dlibBuffer + size * 2;
    if (out_count != 0)
        *out_count = (g_dlibBufferSize * 2 - size) * 16;
}

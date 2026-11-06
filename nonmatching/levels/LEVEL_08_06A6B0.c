/* LEVEL_08.REL:0x06A6B0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +32.
 * Recheck the vector field widths and source/target load order. No matching credit.
 */
typedef struct { char pad[0x38]; int flag; } Rec;
extern Rec D_002883E8;
extern int D_0023D8B0;
extern void func_088940(void *, void *, void *, int, int, int, int, int,
                         float, float, float, float);

void func_06A6B0(char *record)
{
    if (D_002883E8.flag == 0) {
        void *handle = *(void **)(record + 0x59c);
        int global = D_0023D8B0;
        if (global != 0) {
            func_088940(handle, (void *)global, &D_002883E8.flag,
                          0, 0, 0, 0, 1,
                          *(float *)(global + 0x14),
                          *(float *)(global + 0x18),
                          *(float *)(global + 0x1c),
                          *(float *)(global + 0x20));
        }
    }
}

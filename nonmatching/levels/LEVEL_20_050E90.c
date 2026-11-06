/* LEVEL_20.REL:0x050E90: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +32.
 * Recheck the vector field widths and source/target load order. No matching credit.
 */
typedef struct { char pad[0x38]; int flag; } Rec;
extern Rec D_00143158;
extern int D_00104B20;
extern void func_0624D8(void *, void *, void *, int, int, int, int, int,
                         float, float, float, float);

void func_050E90(char *record)
{
    if (D_00143158.flag == 0) {
        void *handle = *(void **)(record + 0x59c);
        int global = D_00104B20;
        if (global != 0) {
            func_0624D8(handle, (void *)global, &D_00143158.flag,
                          0, 0, 0, 0, 1,
                          *(float *)(global + 0x14),
                          *(float *)(global + 0x18),
                          *(float *)(global + 0x1c),
                          *(float *)(global + 0x20));
        }
    }
}

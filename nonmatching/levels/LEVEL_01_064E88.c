/* LEVEL_01.REL:0x064E88: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +32.
 * Recheck the vector field widths and source/target load order. No matching credit.
 */
typedef struct { char pad[0x38]; int flag; } Rec;
extern Rec D_00239158;
extern int D_001F49F0;
extern void func_0809D0(void *, void *, void *, int, int, int, int, int,
                         float, float, float, float);

void func_064E88(char *record)
{
    if (D_00239158.flag == 0) {
        void *handle = *(void **)(record + 0x59c);
        int global = D_001F49F0;
        if (global != 0) {
            func_0809D0(handle, (void *)global, &D_00239158.flag,
                          0, 0, 0, 0, 1,
                          *(float *)(global + 0x14),
                          *(float *)(global + 0x18),
                          *(float *)(global + 0x1c),
                          *(float *)(global + 0x20));
        }
    }
}

/* LEVEL_05.REL:0x062AF0: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +32.
 * Recheck the vector field widths and source/target load order. No matching credit.
 */
typedef struct { char pad[0x38]; int flag; } Rec;
extern Rec D_00224E58;
extern int D_001E3D70;
extern void func_07E070(void *, void *, void *, int, int, int, int, int,
                         float, float, float, float);

void func_062AF0(char *record)
{
    if (D_00224E58.flag == 0) {
        void *handle = *(void **)(record + 0x59c);
        int global = D_001E3D70;
        if (global != 0) {
            func_07E070(handle, (void *)global, &D_00224E58.flag,
                          0, 0, 0, 0, 1,
                          *(float *)(global + 0x14),
                          *(float *)(global + 0x18),
                          *(float *)(global + 0x1c),
                          *(float *)(global + 0x20));
        }
    }
}

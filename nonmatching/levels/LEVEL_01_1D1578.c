/* LEVEL_01.REL:0x1D1578: Ghidra body 100 bytes.
 * Pinned pure C links 100 bytes and first differs at +34.
 * Recheck the record-loop base register and end-address schedule. No matching credit.
 */
extern unsigned char D_00398A60[];
extern int func_1D1238(void);
extern void func_06E400(void *);

void func_1D1578(void)
{
    if (func_1D1238() != 0) {
        unsigned char *record = D_00398A60;
        do {
            func_06E400(record);
            record += 0x68;
        } while (record < D_00398A60 + 0xd0);
        D_00398A60[0xd0] = 0;
    }
}

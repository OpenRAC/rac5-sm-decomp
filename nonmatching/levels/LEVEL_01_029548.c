/* LEVEL_01.REL:0x029548, bounded 168-byte candidate.
 * Isolated pinned C object: 168 bytes; first linked difference
 * at body byte +4. Not linked into the accepted gate or counted.
 * Reopen: All 20 sites measured with the default chain; the first difference is at body byte 4. The qualified gnu-ee-trial, divpad and blockmove profiles produce one identical object and move the first difference to body byte 60, where two legal delay slots are swapped ($a0=$s0 and $f12=$f20). Reopen with a form that swaps those two emissions.
 */
extern int func_00029468(void *record, int mode);
extern void func_000294F0(void *record, float value);
extern void func_00029410(void *record);
extern int func_000291A8(void *record, void *data);
extern void func_000292A8(float value);

void func_00029548(void *record, int flag, void *data, float value)
{
    if (flag != 0) {
        func_00029468(record, 1);
        if (func_000291A8(record, data) != 0) {
            func_000292A8(value);
        } else {
            func_000294F0(record, value);
        }
        func_00029410(record);
    } else {
        if (func_00029468(record, 0) == 0) {
            func_000294F0(record, value);
            func_00029410(record);
        }
    }
}
